/* ver.2 more
 * feture : read from /dev/tty for commands
 */

#include <stdio.h>
#include <stdlib.h>
#define PAGELEN 24
#define LINELEN 512
int see_more(FILE *);
void do_more(FILE *);

int see_more(FILE *cmd) {
  int c;
  printf("\033[7m more? \033[m");
  while ((c = getc(cmd)) != EOF) {
    // reads from tty
    // q means no, space means Y, CR means one line
    if (c == 'q')
      return 0;
    if (c == ' ')
      return PAGELEN;
    if (c == '\n')
      return 1;
  }
  return 0;
}

void do_more(FILE *fp) {
  // read PAGELEN lines, call see_more()
  char line[LINELEN];
  int num_of_lines = 0;
  int see_more(FILE *), reply;

  FILE *fp_tty;
  fp_tty = fopen("dev/tty", "r");
  if (fp_tty == NULL)
    exit(1);

  while (fgets(line, LINELEN, fp)) {
    if (num_of_lines == PAGELEN) {
      reply = see_more(fp_tty);
      if (reply == 0)
        break;
      num_of_lines -= reply;
    }
    if (fputs(line, stdout) == EOF) {
      exit(1);
    }
    num_of_lines++;
  }
}

int main(int argc, char *argv[]) {
  FILE *fp;
  if (argc == 1) {
    do_more(stdin);
  } else {
    while (--argc) {
      if ((fp = fopen(*++argv, "r")) != NULL) {
        do_more(fp);
        fclose(fp);
      } else {
        exit(1);
      }
    }
  }
  return 0;
}
