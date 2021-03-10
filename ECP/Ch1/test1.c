#include <stdio.h>
#pragma
int array[] = {23, 34, 12, 23, 323, 323, 321, 321};
#define TOTAL_ELEM (sizeof(array) / sizeof(array[0]))

int main() {
  int d = -1, x;
  if (d <= (int)TOTAL_ELEM - 2) {
    x = array[d + 1];
  }
  printf("%d ", x);
}
