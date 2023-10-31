#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, cur, temp, sum = 0;
  scanf("%d", &n);
  temp = n;
  n = abs(n);
  while (n != 0) {
    cur = n % 10;
    if (cur % 2 != 0) {
      sum = sum * 10 + cur;
    }
    n /= 10;
  }
  if(temp < 0)
    sum = -sum;
  printf("%d*2=%d\n", sum, sum * 2);
  return 0;
}