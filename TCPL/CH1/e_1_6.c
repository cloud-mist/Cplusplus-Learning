#include <stdio.h>
int main(){
	int c;

	while(c = getchar() != EOF) // != 的优先级比 = 的优先级高
	{
		printf("%d\n", c);
	}
	printf("%d - at EOF\n", c); // ctrl+d 产生EOF的输出
}
