/* 指针与地址
 * &,取一个对象的地址
 * *,访问指针所指向的对象
 */
#include <stdio.h>

int main() {
  int x = 1, y = 2;

  int *ip; // ip是指向int类型的指针;也可以说是 *ip的结果是int类型的;
           //	在我看来 *ip是x的值，
  ip = &x; // ip指向x, 存储的是x的地址
  *ip += 10;
  printf("%p %d\n", ip, x); // 0x7ffd468fa478 11

  int *iq;
  iq = ip; // 将ip中值拷贝到iq,指针iq也指向ip指向的对象。
  printf("%d", *iq); // 11

  return 0;
}
