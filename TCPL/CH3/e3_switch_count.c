// 统计数字，空白符，其他字符出现的次数

#include <stdio.h>

int main() {
  int c, i;
  int nwhite, nother;
  nwhite = nother = 0;
  int ndigit[10] = {0};

  while ((c = getchar()) != EOF) {
    switch (c) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      ndigit[c - '0']++;
      break;

    case ' ':
    case '\n':
    case '\t':
      nwhite++;
      break;

    default:
      nother++;
      break;
    }
  }

  for (i = 0; i < 10; ++i) {
    printf("digit%d's time: %d\n", i, ndigit[i]);
  }
  printf("\nwhite space = %d, other = %d\n", nwhite, nother);

  return 0;
}
