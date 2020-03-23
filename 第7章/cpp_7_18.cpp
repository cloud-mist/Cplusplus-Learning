//函数指针
#include <iostream>
double betsy(int);
double pam(int);
using namespace std;
void estimate(int lines, double (*pf)(int));
int main(){
	int code;
	cout << "how many lines of code do you need? ";
	cin >> code;
	cout << "here betsy:\n";
	estimate(code,betsy);
	cout << "here pam:\n";
	estimate(code,pam);
	return 0;
}

double betsy(int lns)
{
	return 0.05*lns + 0.0004*lns*lns;
}

double pam(int lns)
{
	return 0.03*lns + 0.0004*lns*lns;
}


void estimate(int lines, double (*pf)(int))
{
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hours\n";
}
