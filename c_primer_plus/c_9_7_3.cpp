//用指针来交换两个数
#include <cstdio>
void swap(int * u,int * v);
int main()
{
	int x = 5, y = 10;
	printf("originally x = %d, y = %d\n", x, y);
	swap(&x,&y);
	printf("now        x = %d, y = %d\n", x, y);
	return 0;
}
void swap(int * u,int *v)
{
	int temp = *u;
	*u = *v;
	*v = temp;
}