//展示strlen 和 sizeof 的差别
#include <cstdio>
#include <cstring>
int main()
{
	char name[40] = "zhang xiao";
	printf("%zd %zd\n",strlen(name),sizeof(name) );
	return 0;
}
//result:10 40
