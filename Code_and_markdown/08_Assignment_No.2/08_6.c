#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long stranger = 0;
    long long millionaire = 0;
    
    for (int i = 0; i < n; i++) {
        millionaire += 100000;
        stranger += pow((double)2, (double)i);
    }
    
    printf("%lld\n", millionaire);
    printf("%lld", stranger/100);
    
    return 0;
}