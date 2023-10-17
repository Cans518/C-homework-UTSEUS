#include <stdio.h>
#include <string.h>

void sort(char *arr[], int n) {
  int i, j;
  char *temp;

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (strcmp(*(arr+i), *(arr+j)) > 0) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  char *arr[] = {"red", "blue", "yellow", "green", "purple"};
  int i;

  sort(arr, 5);

  for (i = 0; i < 5; i++)
    printf("%s ", *(arr+i));

  return 0;
}
