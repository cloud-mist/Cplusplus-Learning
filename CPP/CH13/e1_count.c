// 使用标准I/O
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int ch;
  FILE *fp; // 文件指针
  unsigned long count = 0;

  if (argc != 2) {
    // 检查argc值，看是否有命令行参数，没有的话，打印一条消息退出程序
    printf("Usage: %s filename\n", argv[0]); // argv[0]是程序名称

    // 关闭所有打开文件并结束程序,正常结束的程序传递0,异常的传递非0,
    exit(EXIT_FAILURE);
  }
  if ((fp = fopen(argv[1], "r")) == NULL) {
    /* fopen函数，参数1：待打开文件名， 参数2：打开模式。
     * 打开后，会返回文件指针，文件指针类型是指向FILE的指针,指向一个包含文件信息的数据对象。
     */
    printf("Cant open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  while ((ch = getc(fp)) != EOF) {
    /* getc()和getchar()的不同
     * ch = getchar() 从标准输入中获取一个字符
     * ch = getc(fp) 从fp指定的文件中获取一个字符
     */
    putc(ch, stdout); // 参数1：待写入字符，参数2：文件指针（stdin, stdout,
                      // stderr都是文件指针）
    count++;
  }
  fclose(fp);
  printf("File %s has %lu characters\n", argv[1], count);
  return 0;
}
