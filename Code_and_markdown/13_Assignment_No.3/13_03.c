#include <stdio.h>
#include <string.h>

void splitString(char str[], char cut[]) {
    char *token = strtok(str, cut);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, cut);
    }
}

int main() {
    char str[1000];
    char cut[100];

    fgets(str, sizeof(str), stdin);
    fgets(cut, sizeof(cut), stdin);

    str[strcspn(str, "\n")] = '\0'; 
    cut[strcspn(cut, "\n")] = '\0'; 

    splitString(str, cut);

    return 0;
}
