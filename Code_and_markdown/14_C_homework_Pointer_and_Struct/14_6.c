#include <stdio.h>
#include <string.h>

int main() {
  char str[1000], sub[1000];
  char *p = NULL; 

  puts("please input two strings");
  gets(str);
  gets(sub);

  int count = 0;
  p = str;
  while (strstr(p, sub) != NULL) {
    count++;
    p = strstr(p, sub) + strlen(sub);
  }

  printf("%d", count);
  return 0;
}
