// 给一个指向 以NULL结尾的指针列表的 指针。在列表的字符串中查找一个特定的字符
#include <stdio.h>


#define TRUE	1
#define FALSE   0

int find_char( char **strings, char value )
{
	char *string;		// 当前正在查找的字符串
	
	// 对列表中的每个字符串
	while ((string = *strings++) != NULL) {
		// 看字符串中的每个字符， 是否是我们想要的
		while( *string != '\0' )
		{
			if( *string++ == value )
				return TRUE;
		}
	}
	return FALSE;

}
