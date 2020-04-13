#include <cstdio>
#define PAGES 959
int main()
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n\n", PAGES);

	const double rent = 3824.55; //const 变量
	printf("*%f*\n",rent);
	printf("*%e*\n",rent);
	printf("*%4.2f*\n",rent);
	printf("*%3.1f*\n",rent);
	printf("*%10.3f*\n",rent);
	printf("*%10.3E\n",rent);
	printf("*%+4.2f*\n",rent);
	printf("*%010.2f*\n\n",rent);

	char name[11] = "zhang xiao";
	printf("[%2s]\n",name);
	printf("[%14s]\n",name);
	printf("[%14.5s]\n",name);
	printf("[%-14.5s]\n",name);
	return 0;

}
/*result:

*959*
*959*
*       959*
*959       *

*3824.550000*
*3.824550e+03*
*3824.55*
*3824.6*
*  3824.550*
* 3.825E+03
*+3824.55*
*0003824.55*

[zhang xiao]
[    zhang xiao]
[         zhang]
[zhang         ]

*/
