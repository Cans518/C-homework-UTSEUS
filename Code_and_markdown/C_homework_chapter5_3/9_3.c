#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int peach = 1;
    for (int i = n; i >= 2; i--) 
        peach = (peach + 1) * 2;
    printf("%d\n", peach);
    return 0;
}