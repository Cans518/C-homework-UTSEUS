#include<stdio.h>

typedef struct student{
    char num[20];
    char name[20];
    int grade[3];
}student;

int main()
{
    int n;
    student s;
    printf("Input n:");
    scanf("%d",&n);
    printf("Input the student's number,name and course scores\n");
    for(int i = 1; i <= n; i++){
        printf("No.%d:",i);
        scanf("%s%s%d%d%d",s.num,s.name,&s.grade[0],&s.grade[1],&s.grade[2]);
        printf("num:%s,name:%s,average:%.2f\n",s.num,s.name,(double)(s.grade[0]+s.grade[1]+s.grade[2])/3);
    }
    return 0;
}