// 读取一个数n，输出n空白行
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("\n");
	}
	return 0;
}
