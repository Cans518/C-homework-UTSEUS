#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int total_goals = 0;
    int draw_matches = 0;
    int min_goals = 100;
    for (int i = 0; i < n * (n - 1)/2; i++) {
        int goals_a, goals_b;
        scanf("%d %d", &goals_a, &goals_b);
        total_goals += goals_a + goals_b;
        if (goals_a == goals_b)
            draw_matches++;
        if ((goals_a + goals_b) < min_goals) 
            min_goals = goals_a + goals_b;
    }
    printf("%d %d %d", total_goals, draw_matches, min_goals);
    return 0;
}
