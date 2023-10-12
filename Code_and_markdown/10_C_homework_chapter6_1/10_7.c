#include <stdio.h>

int main() {
    int candidate_votes[5] = {0};//5个候选人初始票数为0
    int vote;

    while (scanf("%d", &vote) && vote != -1) {
        if (vote >= 1 && vote <= 5)
            candidate_votes[vote - 1]++;//票数+1
        else 
            printf("Invalid vote. Please enter a number between 1 and 5.\n");
    }

    for (int i = 0; i < 5; i++)
        printf("%d candidate:%d tickets\n", i + 1, candidate_votes[i]);//输出票数

    return 0;
}