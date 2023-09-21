#include <stdio.h>
#include <ctype.h>

void count_characters() {
    int letters = 0;
    int spaces = 0;
    int digits = 0;
    int others = 0;

    char a;
    

    for (int i = 0; i < 10; i++) {
        a = getchar();
        if (isalpha(a))
            letters++;
        else if (isspace(a))
            spaces++;
        else if (isdigit(a)) 
            digits++;
        else
            others++;
    }
    
    printf("letter=%d,blank=%d,digit=%d,other=%d", letters,spaces,digits,others);
}

int main() {

    printf("Input 10 characters: ");
    
    count_characters();
    
    return 0;
}