// 确定类型的取值范围

#include <stdio.h>
#include <limits.h>

int main(){
	printf(" char max is %d\n", CHAR_MAX);
	printf(" char min is %d\n", CHAR_MIN);
	printf(" short max is %d\n", SHRT_MAX);
	printf(" short min is %d\n", SHRT_MIN);
	printf(" int max is %d\n", INT_MAX);
	printf(" int min is %d\n", INT_MIN);
	printf(" long max is %ld\n", LONG_MAX);
	printf(" long min is %ld\n", LONG_MIN);

	printf(" unsigned char max is %u\n", UCHAR_MAX);
	printf(" unsigned short max is %u\n", USHRT_MAX);
	printf(" unsigned int max is %u\n", UINT_MAX);
	printf(" unsigned long max is %lu\n", ULONG_MAX);
}
