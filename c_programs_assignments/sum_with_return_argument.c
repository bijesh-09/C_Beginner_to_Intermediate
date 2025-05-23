#include<stdio.h>
int sum(int,int);

int main()
{
    int a ,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Sum = %d",sum(a,b));
    return 0;
}

int sum(int m,int n)
{
    int sum; //local variable
    sum = m + n;
    return sum;
}
