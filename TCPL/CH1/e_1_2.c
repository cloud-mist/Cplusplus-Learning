// 当printf函数的参数字符串中包含\c （c是上面转义字符列未出现的字符），看看会有什么情况
#include <stdio.h>

main(){
	printf("hello world\7");
	printf("hello world\?");
	printf("hello world\y");
	// \7代表短峰鸣 \后面可以放3个八进制数来表示一个字符
	// result:	hello worldhello world?hello worldy
}
