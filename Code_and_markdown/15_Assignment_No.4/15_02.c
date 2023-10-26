#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *comb(int a,int b){
    char *p;
    p=(char *)malloc(5*sizeof(char));
    p[4]='\0';
    p[0]=a%10+'0';
    p[1]=b%10+'0';
    p[2]=(a/10)%10+'0';
    p[3]=(b/10)%10+'0';
    if (p[0] == '0')
        p++;
    return p;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%s",comb(a,b));
    return 0;
}