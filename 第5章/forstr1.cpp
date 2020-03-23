#include <iostream>
using namespace std;
int main()
{
	cout << "enter a word:";
	string word;
	cin >> word;

	for(int i =word.size()-1;i>=0;i--){
		cout << word[i];

}
	cout << "\nbye.\n";

	
	return 0;
}

// 反方向打印 输入的单词
