#include <stdio.h>

int main()
{
    int d_i=0;
    char a,b[100];
    while(scanf("%c",&a)&&a!='\n'){
        if(a>='0'&&a<='9'){
            b[d_i]=a;
            d_i++;
        }
    }
    for (int i = 0; i < d_i; i++)
            printf("%c ",b[i]);
    printf("\nThere are %d digits!\n",d_i);
    return 0;
}
