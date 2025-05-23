#include<stdio.h>

union student
{
    char name[30];
    int roll;
    float marks;
    char address[50];
}s;


int main()
{

    printf("Enter name: ");
    scanf("%s",s.name);
    printf("%s\n",s.name);
    
    printf("Enter roll: ");
    scanf("%d",&s.roll);
    printf("%d\n",s.roll);

    printf("Enter marks: ");
    scanf("%d",&s.marks);
    printf("%d\n",s.marks);

    printf("Enter address: ");
    scanf("%s",s.address);
    printf("%s",s.address);

    return 0;
}