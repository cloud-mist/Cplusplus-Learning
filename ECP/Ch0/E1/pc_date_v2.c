#include <stdio.h>
#include <time.h>

int main() {
  time_t biggest = 0x7FFFFFFF;
  printf("biggest = %s \n", asctime(gmtime(&biggest)));
  // 用gmtime()获取最大UTC时间值，但不返回一个可打印字符串。
  // 用asctime()获取一个字符串。
  return 0;
}
// biggest = Tue Jan 19 03:14:07 2038
