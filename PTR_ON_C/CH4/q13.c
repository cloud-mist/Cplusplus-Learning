#include <stdio.h>
int main(){
	int which_word;
	scanf("%d", &which_word);
	switch (which_word) {
		case 1: 
			printf("who");
			break;
		case 2: 
			printf("what");
			break;
		case 3: 
			printf("where");
			break;
		case 4: 
			printf("why");
			break;
		default: 
			printf("don't know");
			break;
	}
	return 0;
}
