#include <stdio.h>

int main() {
    int count;
    char a,password[7]={"000000"};

    for (int i = 0; i < 6; i++){
        for (count = 1; count <= 6; count++){
            scanf("%c", &a);
            if(a == 'A')
                password[i] = count + '0';
        }
        getchar();
    }
    printf("%s\n", password);
    
}
