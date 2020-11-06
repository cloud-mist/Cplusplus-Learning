// 1-8 统计空格，制表符，换行符的个数
#include <stdio.h>

int main(){
	int c, cs, ct, cn; 
	cs = ct = cn = 0;
	
	while((c = getchar()) != EOF){
		if(c == ' ')	++cs;
		else if(c == '\t')	++ct;
		else if(c == '\n')  ++cn;
	}
	printf("space is %d, tab is %d, \\n is %d\n", cs, ct, cn);
}
