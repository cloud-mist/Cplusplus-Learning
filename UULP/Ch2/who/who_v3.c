#include "utmplib.c"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>
#include <utmp.h>

void show_info(struct utmp *utbufp);
void show_time(long timeval);

int main() {
  struct utmp *utbufp, *utmp_next();

  if (utmp_open(UTMP_FILE) == -1) {
    perror(UTMP_FILE);
    exit(1);
  }

  while ((utbufp = utmp_next()) != ((struct utmp *)NULL)) {
    show_info(utbufp);
  }
  utmp_close();
  return 0;
}

void show_info(struct utmp *utbufp) {
  if (utbufp->ut_type != USER_PROCESS)
    // 改动1：users only
    return;

  printf("%-8.8s ", utbufp->ut_name);
  printf("%-8.8s ", utbufp->ut_line);
  show_time(utbufp->ut_time);
  printf("(%s)", utbufp->ut_host);
  printf("\n");
}

void show_time(long timeval) {
  char *cp;
  cp = ctime(&timeval);
  printf("%12.15s", cp + 4);
}
