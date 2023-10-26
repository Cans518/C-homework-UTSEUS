#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int number;
    int count;
} Frequency;

int compare_count(const void* a, const void* b) {
    return ((Frequency*)b)->count - ((Frequency*)a)->count;
}

int compare_number(const void* a, const void* b) {
    return ((Frequency*)a)->number - ((Frequency*)b)->number;
}

void findMostFrequent(int arr[], int n) {
    Frequency frequencies[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < count; j++) {
            if (frequencies[j].number == arr[i]) {
                frequencies[j].count++;
                break;
            }
        }
        if (j == count) {
            frequencies[count].number = arr[i];
            frequencies[count].count = 1;
            count++;
        }
    }
    qsort(frequencies, count, sizeof(Frequency), compare_count);
    int n_max = 1;
    for (int i = 1; i < count; i++){
        if (frequencies[i].count == frequencies[0].count)
            n_max++;
        else
            break;
    }
    qsort(frequencies, n_max, sizeof(Frequency), compare_number);
    printf("%d %d\n", frequencies[0].number, frequencies[0].count);

    for (int i = 1; i < count; i++) {
        if (frequencies[i].count == frequencies[0].count) {
            printf("%d %d\n", frequencies[i].number, frequencies[i].count);
        } 
        else
            break;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    findMostFrequent(arr, n);
    return 0;
}