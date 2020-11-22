#include <stdio.h>
#define MAXLINE 1000 // 允许输入行的最大长度

void copy(char to[], char from[]);
int my_getline(char s[], int lim);

int main(){
	int len, max=0; // len当前行长， max目前发现的最长的行。
	char line[MAXLINE], longest[MAXLINE]; // line 当前输入的行， 后者用于保存最长的行。
	while((len = my_getline(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0)
		printf("%s\nlong is %d", longest, max);
	return 0;
}

int my_getline(char s[], int lim){
	// 将一行读入到s中，并返回长度
	int c,i;
	for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i-1;
}

void copy(char to[], char from[]){
	int i = 0;
	
	while((to[i] = from[i]) !='\0') //将from复制到to.
		++i;
}

