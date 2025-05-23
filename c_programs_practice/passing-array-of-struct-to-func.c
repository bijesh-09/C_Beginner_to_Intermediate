#include<stdio.h>
struct student
{
    int roll;
    char name[30], addr[50];
    float marks;
};


void fn(struct student [], int);

int main()
{
    int i,n;
    struct student s[50];
    printf("How many students: ");
    scanf("%d",&n);
    printf("Enter name, roll, marks and address:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%s%d%f%s",s[i].name, &s[i].roll, &s[i].marks, s[i].addr);
    }
    fn(s,n);
    return 0;
}

void fn(struct student p[], int x)
{
    int i;
    printf("Entered Details are:\n");
    for ( i = 0; i < x; i++)
    {
        printf("%s\t%d\t%f\t%s\n",p[i].name, p[i].roll, p[i].marks, p[i].addr);
    }
}