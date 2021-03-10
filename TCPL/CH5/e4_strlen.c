#include <stdio.h>

int strlen_v1(char *s) {
  // 返回字符串s的长度
  int n;

  for (n = 0; *s != '\0'; s++) {
    n++;
  }
  return n;
}

int main() {
  int num;
  num = strlen_v1("hello world");
  printf("%d", num);
  return 0;
}
