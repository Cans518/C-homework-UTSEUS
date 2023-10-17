#include<stdio.h>
#include<ctype.h>

int Findtoupper(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (isupper(s[i]))
            return i;
        i++;
    }
    return -1;
}

int main()
{
    char s[100];
    gets(s);
    int f = Findtoupper(s);
    if (f == -1)
        printf("No Captial Letter");
    else
        printf("%s", (s+f));

    return 0;
}
