#include <stdio.h>
#include <math.h>

int main()
{
    int d_i=0;
    char a,b[6];
    printf("Please input the number:");
    do{
        scanf("%c",&a);
        if(a>'0'&&a<'9'){
            b[d_i]=a;
            d_i++;
        }
    }while (a!='\n');
    printf("Inversed number is: ");
    for (int i = d_i-1; i >= 0; i--)
        printf("%c",b[i]);
    printf("\nIt has %d bits.",d_i);
    return 0;
}
