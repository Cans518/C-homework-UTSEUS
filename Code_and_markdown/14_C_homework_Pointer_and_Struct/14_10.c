#include<stdio.h>

typedef struct student{
    char num[20];
    char name[20];
    int grade[3];
}student;

void student_print(student *student,int i){
    printf("The number %s student's score name is %s\n",student->num,student->name);
}

int main(){
    student s[]={{"1001","ZhangLi",{78,87,85}},{"1002","WangWu",{78,87,85}},{"1003","LiYan",{78,87,85}}};
    for(int i = 1; i <= 3; i++)
        student_print(&s[i-1],i);
    return 0;
}