#include <iostream>
struct inflatable{
	char name[20];
	 float volume;
	 double price;
};
int main(){
	using namespace std;
	inflatable* ps = new inflatable;
	cout << "enter name of inflatable item: ";
	cin.get(ps->name, 20);			//method 1 for member access
	cout << "enter volume in cubic feet: ";
	cin >> (*ps).volume;			//method 2
	cout << "enter price: $";
	cin >> ps->price;
	
	cout << "name: " << (*ps).name << endl;				//method 2
	cout << "volume: " << ps->volume << "cubic feet\n"; //method 1
	cout << "price: $" << ps->price<< endl;				//method 1
	delete ps;											//free memory
	return 0;
}