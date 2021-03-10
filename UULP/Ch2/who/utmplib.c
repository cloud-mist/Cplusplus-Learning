/*
 * -- open file
 * utmp_open(filename)
 *	returns -1 on error
 *
 * -- return pointer to next struct
 * utmp_next()
 *	returns NULL on eof
 *
 * -- close file
 * utmp_close
 */

#include <fcntl.h> // open
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> // read
#include <utmp.h>

#define NRECS 16
#define NULLUT ((struct utmp *)NULL)
#define UTSIZE (sizeof(struct utmp))

int utmp_open(char *filename);
struct utmp *utmp_next();
int utmp_reload();

static char utmpbuf[NRECS * UTSIZE]; // storage
static int num_recs;                 // num stored
static int cur_rec;                  // next ot go
static int fd_utmp = -1;             // read from

int utmp_open(char *filename) {
  fd_utmp = open(filename, O_RDONLY);
  cur_rec = num_recs = 0;
  return fd_utmp;
}

struct utmp *utmp_next() {
  struct utmp *recp;
  if (fd_utmp == -1) {
    return NULLUT;
  }
  if (cur_rec == num_recs && utmp_reload() == 0) {
    return NULLUT;
  }
  recp = (struct utmp *)&utmpbuf[cur_rec * UTSIZE];
  cur_rec++;
  return recp;
}

int utmp_reload() {
  // read next bunch of records into buf
  int amt_read; // read them in
  amt_read = read(fd_utmp, utmpbuf, NRECS * UTSIZE);
  num_recs = amt_read / UTSIZE;
  cur_rec = 0;
  return num_recs;
}

void utmp_close() {
  if (fd_utmp != -1)
    close(fd_utmp);
}
