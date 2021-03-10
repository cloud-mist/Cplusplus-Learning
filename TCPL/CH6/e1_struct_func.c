// 结构和函数

#include <stdio.h>
#define XMAX 3
#define YMAX 4

struct point {
  // 结构基本
  int x;
  int y;
};

struct rect {
  // 结构嵌套
  struct point pt1;
  struct point pt2;
};

struct point makepoint(int x, int y) {
  // makepoint函数，通过x,y,构造一个点
  struct point temp;

  temp.x = x;
  temp.y = y;
  return temp;
}

struct point addpoint(struct point p1, struct point p2) {
  /* addpoint函数，两点相加， 赋给p1*/
  p1.x += p2.x;
  p1.y += p2.y;
  return p1;
}

int pt_in_rect(struct point p, struct rect r) {
  /*pt_in_rect函数： 若点p在矩形r内， 返回1, 否则返回0*/
  return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}

int min(int x, int y) { return x < y ? x : y; }
int max(int x, int y) { return x > y ? x : y; }

struct rect canonrect(struct rect r) {
  // 矩形坐标规范化
  struct rect temp;
  temp.pt1.x = min(r.pt1.x, r.pt2.x);
  temp.pt1.y = min(r.pt1.y, r.pt2.y);
  temp.pt2.x = max(r.pt1.x, r.pt2.x);
  temp.pt2.y = max(r.pt2.y, r.pt2.y);
  return temp;
}

int main() {
  struct rect screen;
  struct point middle;
  screen.pt1 = makepoint(0, 0);
  screen.pt2 = makepoint(XMAX, YMAX);
  middle = makepoint((screen.pt1.x + screen.pt2.x) / 2,
                     (screen.pt1.y + screen.pt2.y) / 2);

  return 0;
}
