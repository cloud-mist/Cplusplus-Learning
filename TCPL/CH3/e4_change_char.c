#include <stdio.h>
// 题目：escape(s, t),将字符串t复制到s中，并且将那些空白字符显式。

void escape(char s[], char t[]) {
  int i, j;
  for (i = j = 0; t[i] != '\0'; i++) {
    switch (t[i]) {
    case '\n':
      s[j++] = '\\';
      s[j++] = 'n';
      break;

    case '\t':
      s[j++] = '\\';
      s[j++] = '\t';
      break;

    default:
      s[j++] = t[i];
      break;
    }
  }
  s[j] = '\0';
}

void unescape(char s[], char t[]) {
  int i, j;
  for (i = j = 0; t[i] != '\0'; i++) {
    if (t[i] != '\\') {
      s[j++] = t[i];
    } else {
      // 如果是一个"\"
      switch (t[++i]) {
      case 'n':
        s[j++] = '\n';
        break;
      case 't':
        s[j++] = '\t';
        break;
      default:
        s[j++] = '\\';
        s[j++] = t[i];
        break;
      }
    }
  }
  s[j++] = '\0';
}
