#include<stdio.h>

union student
{
    char name[30];
    int roll;
    float marks;
    char addr[50];
};

int main()
{
    union student s;
    printf("Enter the name: ");
    scanf("%s",s.name);
    printf("Entered name: %s\n",s.name);
    printf("Enter the roll number: ");
    scanf("%d",&s.roll);
    printf("Entered roll number: %d\n",s.roll);
    printf("Enter the marks: ");
    scanf("%f",&s.marks);
    printf("Entered marks: %.2f\n",s.marks);
    printf("Enter the address: ");
    scanf("%s",s.name);
    printf("Entered address: %s",s.addr);
    return 0;
}
