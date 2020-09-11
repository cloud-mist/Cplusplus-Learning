// 打印1-100的质数
#include <stdio.h>
#include <math.h>
bool isPrime(int n){
	if (n <= 1) return 0;
	int sqr = (int)sqrt(1.0 * n);
	for(int i = 2; i <= sqr; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	for(int i = 1; i<= 100; i++)
	{
		if(isPrime(i) == 1){
		printf("%d ", i);	
		}
	}	
	return 0;
}
