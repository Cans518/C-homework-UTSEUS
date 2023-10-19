#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=sqrt((double)n);i++){
        if(n%i==0){
            printf("NO");
            return 0;
        }   
    }
    printf("YES");
    return 0;
}
