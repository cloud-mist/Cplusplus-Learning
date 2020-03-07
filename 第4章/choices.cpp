#include <iostream>
#include <vector>
#include <array>
int main(){
	using namespace std;
	//三种声明方式 都可以用标准数组指示法来访问各个元素
	double a1[4] = {1.2, 2.4, 3.6, 4.8};
	
	vector<double> a2(4);
	a2[0] = 1.0/3.0;
	a2[1] = 1.0/5.0;
	a2[2] = 1.0/7.0;
	a2[3] = 1.0/9.0;

	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
	array<double, 4> a4;
	a4 = a3;

	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
					
	a1[-2] = 20.2;	//找到a1指向的方向 ，向前移动两个double元素。并将20.2
					//存储
	cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	return 0;
}
