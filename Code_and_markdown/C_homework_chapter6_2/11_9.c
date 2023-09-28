#include <stdio.h>
#include <string.h>

void insertCharAtIndex(char str[], int index, char ch) {
    int length = strlen(str);

    for (int i = length; i >= index; i--)
        str[i + 1] = str[i];

    str[index] = ch;
}

int main() {
    char ch, str[100];
    int index;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    
    scanf("%d", &index);
    
    scanf(" %c", &ch);
    
    insertCharAtIndex(str, index, ch);
    
    puts(str);

    return 0;
}