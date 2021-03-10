#include <stdio.h>
#include <time.h>

int main() {
  time_t biggest = 0x7FFFFFFF;

  printf("biggest = %s \n", ctime(&biggest));
  // ctime 把参数转换成当地时间，但跟统一时间不一致，并且取的所在时区的时间。
  return 0;
}
// Result: biggest = Tue Jan 19 11:14:07 2038
