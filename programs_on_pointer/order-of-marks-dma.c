#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[30];
    int roll;
    float marks;
    char address[50];
};

void display(struct student *,int);

int main()
{
    struct student *ptr;
    int n,i;

    printf("How many students?: ");
    scanf("%d",&n);

    ptr = (struct student *)malloc(n*sizeof(struct student));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        printf("Terminating...");
        exit(1);
    }

    for ( i = 0; i < n; i++)
    {
        printf("Enter name, roll, marks and address of student_%d:\n",i+1);
        scanf("%s%d%f%s",(ptr+i)->name,&(ptr+i)->roll,&(ptr+i)->marks,(ptr+i)->address);
    }
    display(ptr,n);
    free(ptr);
    return 0;
}

void display(struct student *p,int x )
{
    int i,j;
    struct student temp;
    for ( i = 0; i < x-1; i++)
    {
        for ( j = i+1; j < x; j++)
        {
            if ((p+i)->marks < (p+j)->marks)
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
            
        }
        
    }
    
    for ( i = 0; i < x; i++)
    {
        printf("\nName\tRoll\tMarks\tAddress\n");
        printf("%s\t%d\t%.2f\t%s",(p+i)->name,(p+i)->roll,(p+i)->marks,(p+i)->address);
    }
}