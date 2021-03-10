/* 倒序显示文件内容
 * fseek(),可以把文件看作是数组，可移动到任意字节处,有3个参数，返回int
 * 参1：FILE指针，参2：偏移量 参3：起始点
 * ftell()返回一个long值，表示在文件中的当前位置
 */
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'
#define SLEN 81

int main() {
  char file[SLEN];
  char ch;
  FILE *fp;
  long count, last;
  puts("Enter the name of the files to be processed:");
  scanf("%80s", file);

  if ((fp = fopen(file, "rb")) == NULL) {
    // 二进制只读
    printf("reverse can't open %s\n", file);
    exit(EXIT_FAILURE);
  }

  fseek(fp, 0L, SEEK_END); // 定位到文件末尾最后一个字节
  last = ftell(fp);

  for (count = 1L; count <= last; ++count) {
    fseek(fp, -count, SEEK_END);
    ch = getc(fp);
    if (ch != CNTL_Z && ch != '\r') {
      putchar(ch);
    }
  }
  putchar('\n');
  fclose(fp);
  return 0;
}
/* 测试结果
➜  e4_Reverse (master) ✗ cc -o reverse e4_reverse.c
➜  e4_Reverse (master) ✗ ./reverse
Enter the name of the files to be processed:
testfile

I think that I shall never see
a program more lovely than one in C.
*/
