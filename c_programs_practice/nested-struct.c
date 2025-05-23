#include<stdio.h>
struct dob
{
    int year,month,day;
};

struct person
{
    char name[30];
    int ctzn;
    struct dob d;
}p;

int main()
{
    int i,n;
    printf("Enter name and citizenship number:\n ");
    scanf("%s%d",p.name,&p.ctzn);
    printf("Enter DOB YYYY-MM-DD:\n");
    scanf("%d%d%d",&p.d.year,&p.d.month,&p.d.day);
    printf("Entered details are:\n");
    printf("Name = %s\t Citizenship Number = %d\t DOB = %d-%d-%d",p.name,p.ctzn,p.d.year,p.d.month,p.d.day);
    return 0;
}

