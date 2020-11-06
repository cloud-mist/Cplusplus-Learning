// 将连续的多个空格用一个空格代替
#include <stdio.h>

#define NONBLANK 'a'

int main(){
	int c, lastc;
	lastc = NONBLANK;

	while((c = getchar()) != EOF){
		// 把遇到的一长串空格的第一个空格输出
		if(c != ' ' || lastc != ' ')
			putchar(c);
		lastc = c;
	}
}

