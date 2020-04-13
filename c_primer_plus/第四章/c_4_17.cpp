//%*d 来跳过输入

#include <cstdio>
int main()
{
	int n;
	printf("please enter three ints:\n");
	scanf("%*d %*d %d", &n);
	printf("the last int was %d\n", n );
	return 0;
}
