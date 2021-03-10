/* 1.同时打开两个文件，一个'r'模式.一个'w'模式
 * 2.以保留每3个字符中的第1个字符的方式压缩第一个文件的内容
 * 3.吧压缩后的文本存到第二个文件，文件名是第一个文件名加.red后缀
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 提供strpy(),strcat()
#define LEN 40

int main(int argc, char *argv[]) {
  FILE *in, *out; // 声明两个指向FILE的指针
  int ch;
  char name[LEN]; // 存储输出文件名
  int count = 0;

  // 检查命令行参数
  if (argc < 2) {
    fprintf(stderr, "Usage: %s filename\n", argv[0]);
    // fprintf()第一个参数必须是文件指针，使用stderr指针把错误消息发送至标准错误
    exit(EXIT_FAILURE);
  }

  // 设置输入
  if ((in = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  // 设置输出
  strncpy(name, argv[1],
          LEN - 5); // 拷贝文件名,-5是为了.red和末尾空字符预留空间
  name[LEN - 5] = '\0';
  strcat(name, ".red"); // 添加后缀

  if ((out = fopen(name, "w")) == NULL) {
    fprintf(stderr, "Can't create output file.\n");
    exit(3);
  }

  // copy
  while ((ch = getc(in)) != EOF) {
    if (count++ % 3 == 0)
      putc(ch, out);
  }

  // 关闭文件，并检查是否错误
  if (fclose(in) != 0 || fclose(out) != 0) {
    fprintf(stderr, "Error in closing files\n");
  }
  return 0;
}
