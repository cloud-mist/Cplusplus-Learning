// 创建一个在一行打印40个*的函数并且使用
// 9.1 lethead1

#include <cstdio>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
void starbar(void);

int main(void){
	starbar();
	printf("%s\n",NAME);
	printf("%s\n",ADDRESS);
	printf("%s\n",PLACE);
	starbar();
	return 0;
}

void starbar(void){
	int count;
	for (count = 1; count <= WIDTH; count++) {
		putchar('*');
	}
	putchar('\n');
}

