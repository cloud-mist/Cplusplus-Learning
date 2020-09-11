#include <stdio.h>
int main(){
	int a, leap;
	printf("please enter a nuber(year):");
	scanf("%d", &a);
	if (a % 4 == 0 || (a % 100 == 0 && a % 400 == 0)){
		leap = 1;
	}else{
		leap = 0;
	}
	printf("%d\n", leap);
	return 0;
}
