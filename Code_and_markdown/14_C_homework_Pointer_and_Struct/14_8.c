#include<stdio.h>

typedef struct student{
    char num[20];
    char name[20];
    int grade[3];
}student;

int main()
{
    student s={"1001","ZhangLi",{78,87,85}};
    student *p = &s;
    printf("s1:%s %s %d %d %d\n",s.num,s.name,s.grade[0],s.grade[1],s.grade[2]);
    printf("s1:%s %s %d %d %d\n",p->num,p->name,p->grade[0],p->grade[1],p->grade[2]);
    return 0;
}