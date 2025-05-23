#include<stdio.h>
#include<stdlib.h>

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
    struct student *p, temp;
    p = (struct student *)malloc(3*sizeof(struct student));
    printf("How many students?: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the name, roll number, marks and address of student_%d:\n",i+1);
        scanf("%s%d%f%s",(p+i)->name,&(p+i)->roll,&(p+i)->marks,(p+i)->addr);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if ((p+i)->marks < (p+i)->marks)
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
            
        }
        
    }
    
    printf("The entered details are:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%s\t%d\t%.2f\t%s\n",(p+i)->name,(p+i)->roll,(p+i)->marks,(p+i)->addr);
    }
    free(p);
    return 0;
}