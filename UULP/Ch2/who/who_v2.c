/* who v2
 *
 *
 */
#include <fcntl.h> // open
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // read
#include <utmp.h>

void show_info(struct utmp *utbufp);
void show_time(long timeval);

int main() {
  struct utmp current_record; // 存放得到的信息
  int utmpfd;
  int reclen = sizeof(current_record);

  if ((utmpfd = open(UTMP_FILE, O_RDONLY)) == -1) {
    // perror是一个系统函数，处理系统报错
    perror(UTMP_FILE);
    exit(1);
  }

  while (read(utmpfd, &current_record, reclen) == reclen) {
    // 1.从文件中逐条读取数据，存放于curr_rd中，再显示，
    // 2.当文件中没有数据，就循环结束
    show_info(&current_record);
  }
  close(utmpfd);
  return 0;
}

void show_info(struct utmp *utbufp) {

  if (utbufp->ut_type != USER_PROCESS)
    // 改动1：users only
    return;

  printf("%-8.8s ", utbufp->ut_name);
  printf("%-8.8s ", utbufp->ut_line);
  show_time(utbufp->ut_time);
  printf("(%s)", utbufp->ut_host);
  printf("\n");
}

// 改动2
void show_time(long timeval) {
  /*
   * 以比较友好的方式显示时间
   * 用ctime转换，然后截取需要的部分
   */
  char *cp;
  cp = ctime(&timeval);
  printf("%12.15s", cp + 4); // 从第四个字符开始，截取15个字符
}
//					RESULT
// cloudmis tty1     Mar  9 09:26:14()
