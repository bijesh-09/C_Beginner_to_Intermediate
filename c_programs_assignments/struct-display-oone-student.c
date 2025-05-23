#include<stdio.h>

struct student
{
    char name[30];
    int roll;
    float marks;
    char addr[50];
};

int main()
{
    struct student s;
    printf("Enter the name, roll number, marks and address:\n");
    scanf("%s%d%f%s",s.name,&s.roll,&s.marks,s.addr);
    printf("The entered details are:\n");
    printf("%s\t%d\t%.2f\t%s",s.name,s.roll,s.marks,s.addr);
    return 0;
}
