//use new to new a array and free the memory
//可以将p3当成数组名来使用 
#include <iostream>
int main(){
	using namespace std;
	double* p3 = new double [3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	
	cout << "p3[1] is " << p3[1] << "\n";
	p3 = p3 + 1;
	cout << "now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 -1;			//point back to beginning
	delete [] p3;		//free the memory
	return 0;
}
