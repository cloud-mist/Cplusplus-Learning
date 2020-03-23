#include <iostream>
using namespace std;
inline double square(double x){ return x * x; }
//内联函数。,如果定义过长不太适合.不能递归.加inline即可
int main(){
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5+7.5);
	cout << a << endl;
	cout << b << endl;
	cout << square(c++) << endl;
	cout << c ;
	return 0;
}
