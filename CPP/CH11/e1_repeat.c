// 带参数的main()
#include <stdio.h>
int main(int argc, char *argv[]) {
  /* 编译器允许main()没有参数或有两个
   * 有两个时：参1：命令行中字符串数量，argc(参数计数，argument
   * count,空格表示一个字符串的结束和下一个的开始)
   * 参二：把字符串储存在内存，把每个字符串的地址存在指针数组中，而该数组的地址就是参二。
   */
  int count;
  printf("The command line has %d arguments:\n", argc - 1);
  for (count = 0; count < argc; ++count) {
    printf("%d: %s\n", count, argv[count]);
  }
  printf("\n");
  return 0;
}
// argv[0] 指向 ./repeat
// argv[1] 指向 Resistance
// 以此类推

/* 例子：
➜  CH11 (master) ✗ ./repeat Resistance is futile
The command line has 3 arguments:
0: ./repeat
1: Resistance
2: is
3: futile
*/
