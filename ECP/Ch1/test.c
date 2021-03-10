#include <stdio.h>
int main() {
  if (-1 < (unsigned char)1) {
    printf("-1 is less than (unsigned char)1 : ANSI");
  } else {
    printf("-1 NOT less than (unsigned char)1: K&R");
  }
  return 0;
}
//-1 is less than (unsigned char)1 : ANSI
