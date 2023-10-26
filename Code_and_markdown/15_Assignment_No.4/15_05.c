#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcom(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

char *str_bin(const char* str1, const char* str2){
    int len = strlen(str1) + strlen(str2);
    char *p;
    p = (char *)malloc(len);
    memset(p, 0, len);
    // 将str1和str2合并后放入p
    strcat(p, str1);
    strcat(p, str2);
    // 将p中元素按照asiic码排序
    qsort(p, len, sizeof(char), strcom);
    return p;
}

int main(){
    char str1[100], str2[100];
    scanf("%s%s", str1, str2);
    printf("%s", str_bin(str1, str2));
    return 0;
}