// 输出 输入的东西，并且计算他的校验和

// Ex: Hello world!
// result: Hello world! 
//		   102

#include <stdio.h>
#include <string.h>
#define MAX_INPUT 1000

int main(){
	char input[MAX_INPUT];
	signed char checksum = -1;
	if(fgets( input, sizeof(input), stdin) != NULL){
		int index = 0;
		while (input[index] != '\0') {
			checksum += input[index];
			index++;
		}
	printf("input = %schecksum = %d\n", input, checksum);
	}
	return 0;
}
