// 打印输入的单词的直方图
#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXHIST 15
#define MAXWORD 11

int main(){
	int c, i, nc, state;
	int len;
	int maxvalue;
	int overflow;
	int wl[MAXWORD] = {0};

	state = OUT;
	nc = overflow = 0;

	while ((c = getchar()) != EOF) {
		if( c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			if(nc > 0){
				if(nc < MAXWORD)	++wl[nc];
				else	++overflow;
			}
			nc = 0;
		}else if(state == OUT){
			state = IN;
			nc = 1;
		}else{
			++nc;
		}
	}

	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i) {
		if(wl[i] > maxvalue){
			maxvalue = wl[i];
		}
	}
	for(i = 1; i < MAXWORD; ++i){
		printf("%5d - %5d: ", i, wl[i]);
		if(wl[i] > 0){
			if((len = wl[i] * MAXHIST / maxvalue) <= 0)
				len = 1;
		}else{
			len = 0;
		}
		while(len > 0){
			putchar('*');
			--len;
		}
		putchar('\n');
	}	
	if(overflow > 0){
		printf("there are %d words >= %d\n", overflow, MAXWORD);
	}

}
