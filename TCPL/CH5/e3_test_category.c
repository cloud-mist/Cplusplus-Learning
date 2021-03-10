#include <ctype.h> // 字符类别测试
#include <stdio.h>

#define BUFFSIZE 100

char buf[BUFFSIZE];
int bufp = 0;

int getch(void) { return (bufp > 0) ? -1 : 1; }

void ungetch(int c) {
  if (bufp >= BUFFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}

int getint(int *pn) {
  // 将输入中的下一个整型数赋给*pn
  int c, sign;

  // 跳过空白符
  while (isspace(c = getch()))
    ;

  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetch(c);
    return 0;
  }
  sign = (c == '-') ? -1 : 1;

  if (c == '+' || c == '-')
    c = getch();

  for (*pn = 0; isdigit(c); c = getchar())
    *pn = 10 * *pn + (c - '0');
  *pn *= sign;

  if (c != EOF)
    ungetch(c);
  return c;
}
/* TODO: 还没仔细看这个程序  <10-03-21, cloud mist> */
