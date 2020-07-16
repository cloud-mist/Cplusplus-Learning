#include <iostream>
using namespace std;
struct test{
	int year;
};

int main(){
	//三种情况 
	test s01,s02,s03;
	s01.year = 1998;
	test* pa = &s02;
	pa->year = 1999;
	test trio[3];
	trio[0].year = 2003;
	
	cout << trio->year << endl;
	const test* arp[3] = {&s01, &s02, &s03};
	cout << arp[1]->year << endl;
	const test* *ppa = arp; 
	//arp 是一个数组名 ，所以 它是第一个元素的地址，但第一个元素是指针 
	//ppa是一个指针 
	auto ppb = arp;
	
	cout << (*ppa)->year << endl;
	cout << (*(ppb+1))->year << endl;
	return 0;
	
}