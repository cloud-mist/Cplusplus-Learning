// 把十六进制数字组成的字符串，转换成与之等价的整型值,(包含可选0x,0X)
#define YES 1
#define NO 0

int htoi(char s[]){
	int i, n;
	int inhex, hexdigit;

	n = 0;
	i = 0;
	//1.有前缀，跳过前缀
	if(s[i] == '0'){
		++i;
		if(s[i] == 'x' || s[i] == 'X'){
			++i;
		}
	}

	for(; inhex == YES ;i++) // index 是假设是合法的十六进制数
	{
		if(s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			hexdigit = s[i] - 'a' + 10; // 因为 a就是10,所以后面的要+10
		else if(s[i] >= 'A' && s[i] <= 'F')
			hexdigit = s[i] - 'A' + 10;
		else 
			inhex = NO; // 那么就不是一个合法的16进制数
		if(inhex == YES)
			n = 16 * n + hexdigit; // 是对的，把16提出层层 乘
		
	}
	return n;
}
