#include<stdio.h>

int *addition(int , int);
int main()
{
    int a,b,*sum;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    sum = addition(a,b);
    printf("Sum = %d",*sum);
    return 0;
}

int *addition(int a, int b)
{
    static int s;
    s = a+b;
    return &s;
}