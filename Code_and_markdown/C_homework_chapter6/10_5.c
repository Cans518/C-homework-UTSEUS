#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double sum = 0, avg, variance = 0, std_deviation, scores[21];

    for (i = 0; i < 20; i++) {
        scanf("%lf", &scores[i]);
        sum += scores[i];
    }

    avg = sum / 20;

    for (i = 0; i < 20; i++) 
        variance += pow((double)(scores[i] - avg), (double)2);

    variance /= 20;
    std_deviation = sqrt(variance);

    printf("average=%f,std=%f ", avg, std_deviation);

    return 0;
}