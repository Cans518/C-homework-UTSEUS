#include <stdio.h>

int main()
{
    int a,sum_o=0,sum_e=0,i_o=0,i_e=0;
    while(scanf("%d",&a) && a!=0) {
        if(a&1) {
            sum_o += a;
            i_o++;
        }
        else {
            sum_e += a;
            i_e++;
        }
    }
    printf("Number of even:%d;Average of even:%.2f\nNumber of odd:%d;Average of odd:%.2f",i_e,(double)sum_e/(double)i_e,i_o,(double)sum_o/(double)i_o);
    return 0;
}
