#include<stdio.h>
int sum();

int main()
{
    printf("Sum = %d",sum());
    return 0;
}

int sum()
{
    int a ,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum = a + b;
    return sum;
}
