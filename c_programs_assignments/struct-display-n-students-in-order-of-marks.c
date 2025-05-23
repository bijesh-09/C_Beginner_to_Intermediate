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
    int i,j,n;
    struct student s[100], temp;
    printf("How many students?: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the name, roll number, marks and address of student_%d:\n",i+1);
        scanf("%s%d%f%s",s[i].name,&s[i].roll,&s[i].marks,s[i].addr);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (s[i].marks<s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            
        }
        
    }
    
    printf("The entered details are:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%s\t%d\t%.2f\t%s\n",s[i].name,s[i].roll,s[i].marks,s[i].addr);
    }
    
    return 0;
}