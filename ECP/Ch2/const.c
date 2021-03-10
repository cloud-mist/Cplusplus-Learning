#include <stdio.h>
int main() {

  const int two = 2;
  int i = 1;

  switch (i) {
  case 1:
    printf("case 1\n");
  case two:
    // const 关键字并不真正表示常量
    /* TODO: 和书中有冲突。书上说是会报错误,但并没有  <08-03-21, cloud mist> */
    printf("case 2\n");
  }

  return 0;
}
// case 1
// case 2
