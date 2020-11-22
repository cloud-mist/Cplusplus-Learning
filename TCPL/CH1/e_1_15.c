// 当fahr = 0, 20, ... 300, 打印华氏摄氏表
#include <stdio.h>
float celsius(float fahr);

int main(){

	float fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahr Celsius\n"); // 加一个表头
	while (fahr <= upper) {
		printf("%3.0f  %6.1f\n", fahr, celsius(fahr)); 
		// 指明打印宽度(不带小数点部分)和保留小数点的位数，打印的数字会在打印区域右对齐
		fahr += step;
	}
}
float celsius(float fahr){
	return 5.0 / 9.0 * (fahr - 32.0);		  

}

