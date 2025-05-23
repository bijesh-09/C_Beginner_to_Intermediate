#include<stdio.h>

struct DOB
{
    int year,month,day;
};

struct person
{
    char name[30];
    int ctzn;
    struct DOB d;
};

void fn(struct person *,int);

int main()
{
    int i,n;
    struct person s[50],*ptr;
    ptr = s;

    printf("Enter how many citizens?: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter name and citizenship number of person_%d:\n",i+1);
        getchar();
        scanf("%s%d", (ptr+i)->name , &(ptr+i)->ctzn);

        printf("Enter YYYY-MM-DD of person_%d:\n",i+1);
        scanf("%d%d%d", &(ptr+i)->d.year, &(ptr+i)->d.month, &(ptr+i)->d.day);
        
        
    }
    fn(ptr,n);
    
    return 0;
}

void fn(struct person *p,int n)
{
    int i;
    printf("Entered Details:\n");
    for ( i = 0; i < n; i++)
    {
        printf("\nDetails of person_%d:\n",i+1);
        printf("Name\tCtzn_no.\tYYYY-MM-DD\n");
        printf("%s\t%d\t%d-%d-%d\n", (p+i)->name , (p+i)->ctzn, (p+i)->d.year, (p+i)->d.month, (p+i)->d.day);
        
    }
}