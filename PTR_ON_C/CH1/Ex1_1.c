/*
 *从标准输入中读取输入行 并在标准输入中打印这些输入行
 *
 *输入第一行是 一串列标号，以一个负数结尾。 列标号成对出现，说明要打印行的 列范围
 *ex：0 3 10 12 -1   ，第0列～第3列， 第10列～第12列内容 被打印
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS 20				// 所能处理的最大列号
#define MAX_INPUT 1000			// 每个输入行的最大长度

int read_column_numbers(int columns[], int max);
void rearrange(char *output, char const *input, int n_columns, int const columns[]);

int main(void)
{
	int n_columns;				// 进行处理的列标号
	int columns[MAX_COLS];		// 需要处理的列数
	char input[MAX_INPUT];		// 容纳输入行的数组
	char output[MAX_INPUT];		// 容纳输出行的数组
	
	n_columns = read_column_numbers(columns, MAX_COLS );
	

	while(fgets(input, sizeof(input), stdin) ){
		printf("Original input : %s\n", input);
		rearrange(output, input, n_columns, columns);
		printf("Rearranged line: %s\n", output);	
	}
	return EXIT_SUCCESS;
}

int read_column_numbers(int columns[], int max)
{
	int num = 0;
	int ch;

	while(num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
		num += 1;

	if (num % 2 != 0) {
		puts("Last columns number is not paired." );
		exit( EXIT_SUCCESS );
	}

	while( (ch = getchar()) != EOF && ch != '\n' )
		;

	return num;
}

// 处理输入的字符串
void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
	int col;
	int output_col;
	int len;

	len = strlen(input);
	output_col = 0;
	
	for(col = 0; col < n_columns; col += 2){
		int nchars = columns[col + 1] - columns[col] + 1;

		if (columns[col] >= len || output_col == MAX_INPUT - 1)
			break;
		
		if(output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;
	
		strncpy(output + output_col, input + columns[col], nchars);
		output_col += nchars;
	}
	output[output_col] = '\0';
}


