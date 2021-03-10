int binsearch(int x, int v[], int n) {
  // 判定已排序数组v,是否存在特定值x
  // 找到返回值所在位置，没找到返回-1
  int low, high, mid;

  low = 0;
  high = n - 1;

  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid]) {
      high = mid - 1;
    } else if (x > v[mid]) {
      low = mid + 1;
    } else { // 找到匹配值
      return mid;
    }
  }
  return -1; // 没找到
}
