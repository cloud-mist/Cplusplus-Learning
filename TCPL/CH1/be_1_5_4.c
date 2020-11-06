// 统计行数，单词数，字符数
#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int c, cl, cw, cc, state;

	cl = cw = cc = 0;
	state = OUT;
	while((c = getchar()) != EOF){
		++cc;
		if(c == '\n')	++cl;
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		}else if( state == OUT ){
			state = IN;
			++cw;
		}
	}
	printf("cl = %d, cw = %d, cc = %d\n", cl, cw, cc);
}
