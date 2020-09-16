// 计数一个值中值为1的位的个数

#include<stdio.h>
int count_one_bits( unsigned value )
{
	int ones;
	for(ones = 0; value != 0; value >>= 1)
	{	if( (value & 1) != 0)
			ones += 1;
	}		
	return ones;
}
int main(){
	printf("%d", count_one_bits(15));
	return 0;
}
