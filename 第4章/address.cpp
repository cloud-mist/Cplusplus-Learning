// p98 	&加上变量名 就是获取这个变量的位置
#include <iostream>
int main(){
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donutd value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;
	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	return 0;
} 
