// p99 程序4.15
// 思想：将地址视为指定的量 。将值视为派生量
#include <iostream>
int main(){
	using namespace std;
	int updates = 6;		//一个变量
	int * p_updates;		//一个指针 代表一个地址
	p_updates = &updates;	// 把变量加& 成为地址 赋给p_updates
	// values
	cout << "Values: updates = " << updates;
	cout << ", p_updates = " << *p_updates << endl;
	// address
	cout <<"Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;
	// 用指针改变值
	*p_updates = *p_updates + 1;
	cout << "now updates = " << updates << endl;
	return 0;
}
