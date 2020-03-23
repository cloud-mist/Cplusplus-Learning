#include <iostream>
using namespace std;
const int size = 16;
int main()
{
	long long fac[size];
	fac[0] = fac[1] =1LL;
	for (int i = 2; i < size; ++i)
	{
		fac[i] = i * fac[i-1];
	}
	for (int i = 0; i < size; ++i)
	{
		cout << i << "!= " << fac[i] <<endl;
	}



	
	return 0;
}

