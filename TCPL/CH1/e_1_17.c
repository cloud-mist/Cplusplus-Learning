// 打印长度大于80个字符的输入行。
#include <stdio.h>

#define MAXLINE 1000
#define LONGLINE 80

int my_getline(char s[], int lim);

int main()
{
	int len;
	char line[MAXLINE];
	while((len = my_getline(line, MAXLINE)) > 0){ // note：为什么要判断一下大于0。
		if(len > LONGLINE)
			printf("%s", line);
	}
}

int my_getline(char s[], int lim)
{
	// 用数组记录输入行和 返回行长
	int c,i;

	for(i = 0; (c = getchar()) != EOF && i < lim -1 && c != '\n'; i++)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
