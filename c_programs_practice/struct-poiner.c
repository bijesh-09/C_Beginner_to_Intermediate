#include<stdio.h>

struct student
{
    int roll;
    char name[30],addr[50];
    float marks;
}s[50];

int main()
{
    int i,n;
    struct student *p = &s[0];
    printf("How many students: ");
    scanf("%d",&n);
    printf("Enter the name roll marks and address of students:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%s%d%f%s",(p+i)->name,&(p+i)->roll,&(p+i)->marks,(p+i)->addr);
    }
    printf("Entered details are:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%s %d %f %s",(p+i)->name,(p+i)->roll,(p+i)->marks,(p+i)->addr);
    }
    
    return 0;
}