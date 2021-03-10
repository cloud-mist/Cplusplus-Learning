/* who
 * A first ver. of the who program
 * Open, read UTMP file, and show results
 */

#include <fcntl.h> // open
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // read
#include <utmp.h>

void show_info(struct utmp *utbufp);

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
  printf("%-8.8s ", utbufp->ut_name);
  printf("%-8.8s ", utbufp->ut_line);
  printf("%10d ", utbufp->ut_time);
  printf("(%s)", utbufp->ut_host);
  printf("\n");
}

/*							RESULT
   reboot   ~        1615253123 (5.11.4-arch1-1)
   cloudmis tty1     1615253174 ()
*/

// 问题：时间没有正确显示
