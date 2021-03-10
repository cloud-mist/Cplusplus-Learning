// 打开一个文件并显示该文件
#include <stdio.h>
#include <stdlib.h>

int main() {
  int ch;
  FILE *fp;
  char fname[50]; //储存文件名

  printf("Enter the name of the file: ");
  scanf("%s", fname);
  fp = fopen(fname, "r"); // 打开待读取文件
  if (fp == NULL) {
    printf("Failed to open file.Bye\n");
    exit(1);
  }
  // getc(fp) 从打开的文件获取一个字符
  while ((ch = getc(fp)) != EOF)
    putchar(ch);
  fclose(fp); //关闭文件

  return 0;
}
