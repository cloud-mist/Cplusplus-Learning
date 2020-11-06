// 前面例子的for循环简洁版本
// 加上了练习1-5的逆序输出 
#include <stdio.h>

// 符号常量		形式：大写，没有分号。 
#define LOWER 0		/* 温度表的下限	*/
#define UPPER 300
#define STEP 20		// 步长

int main(){
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
