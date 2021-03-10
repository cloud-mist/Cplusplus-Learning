#include <stdio.h>

// 从键盘获取输入字符。当读到#字符停止
int main(void) {
  char ch;
  while ((ch = getchar()) != '#') {
    putchar(ch);
  }
  return 0;
}

/* input：1234#43
 * output：1234
 * */

/* 问题：
 * 用特殊字符结束输入，那么无法在文本中使用这个字符，
 * 所以，寻求更好的方法结束输入
 * */
