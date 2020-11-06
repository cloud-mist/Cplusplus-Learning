/*  将输入中的制表符换为\t, 回退符替换为\b, 反斜杠换为\\ */
#include <stdio.h>

int main(){
	int c;

	while((c = getchar()) != EOF){
		if(c == '\t')  printf("\\t");
		else if(c == '\b')	printf("\\b");
		else if(c == '\\') printf("\\\\"); 
		/* 输出两个反斜杠 必须\\\\ */
		else putchar(c);
	}
}
