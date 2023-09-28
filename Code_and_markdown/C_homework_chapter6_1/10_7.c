#include <stdio.h>

int main() {
    int candidate_votes[5] = {0};
    int vote;

    while (1) {
        scanf("%d", &vote);
        if (vote == -1) 
            break;
        if (vote >= 1 && vote <= 5)
            candidate_votes[vote - 1]++;
        else 
            printf("Invalid vote. Please enter a number between 1 and 5.\n");
    }

    for (int i = 0; i < 5; i++)
        printf("%d candidate:%d tickets\n", i + 1, candidate_votes[i]);

    return 0;
}