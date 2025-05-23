#include<stdio.h>

struct student
{
    char name[30];
    int roll;
    float marks;
    char address[50];
};

void display(struct student [],struct student,int);

int main()
{
    struct student s[50],temp;
    int n,i;
    printf("How many students?: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter name, roll, marks and address of student_%d:\n",i+1);
        scanf("%s%d%f%s",s[i].name,&s[i].roll,&s[i].marks,s[i].address);
    }
    display(s,temp,n);
    return 0;
}

void display(struct student p[],struct student t,int x )
{
    int i,j;
    for ( i = 0; i < x-1; i++)
    {
        for ( j = i+1; j < x; j++)
        {
            if (p[i].marks < p[j].marks)
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
            
        }
        
    }
    
    for ( i = 0; i < x; i++)
    {
        printf("\nName\tRoll\tMarks\tAddress\n");
        printf("%s\t%d\t%.2f\t%s",p[i].name,p[i].roll,p[i].marks,p[i].address);
    }
}