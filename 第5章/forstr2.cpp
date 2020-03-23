#include <iostream>
#include <string>
int main(){
	using namespace std;
	cout << "enter a word: ";
	string word;
	cin >> word;

	char temp;
	int i,j;
	for(j = 0,i = word.size()-1; j<i; --i,++j){ 
// 将第一个字符和最后互换，然后加一个减一个，。直到 j<i 不成立。
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
}
	cout << word << "\nDone\n";
	return 0;

}
//将数组的字符顺序反转，    string类提供了更简洁的方式
