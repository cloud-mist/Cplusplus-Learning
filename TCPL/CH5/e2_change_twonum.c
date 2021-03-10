/* 交换两个数 */
#include <stdio.h>

void swap(int *px, int *py) {
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

int main() {
  int x = 1, y = 2;
  printf("交换前x: %d, y: %d\n", x, y);

  swap(&x, &y);
  printf("交换后x: %d, y: %d", x, y);

  return 0;
}
//交换前x: 1, y: 2
//交换后x: 2, y: 1
