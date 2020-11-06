// 将输入的字符序列输出成每行一个单词的形式

#include <stdio.h>

#define IN 1
#define OUT 0
int main(){
	int c, state;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if(c == '\n' || c == '\t' || c == ' '){
			if(state == IN){	  // c 是单词分隔符，输出换行符，将其置为out,
			putchar('\n');	
			state = OUT;
			}

		}else if( state == OUT ){ // c 不是一个单词分隔符， 是单词的第一个字符
			state = IN;
			putchar(c);
		}else {					  // c 是单词中的字符
			putchar(c);
		}
	}

}
