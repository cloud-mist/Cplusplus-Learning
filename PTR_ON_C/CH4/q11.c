#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b || a <= b) {
		printf("wrong");
	}else{
		printf("right");
	}
	return 0;
}
