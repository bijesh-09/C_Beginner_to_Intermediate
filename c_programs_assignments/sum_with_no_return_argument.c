#include<stdio.h>
void sum(int,int);

int main()
{
    int a ,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum(a,b); // fn call
    return 0;
}

void sum(int m,int n)
{
    int sum;
    sum = m + n;
    printf("Sum = %d",sum);
}
