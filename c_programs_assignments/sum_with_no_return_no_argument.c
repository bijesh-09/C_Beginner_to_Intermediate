#include<stdio.h>
void sum();

int main()
{
    sum();
    return 0;
}

void sum()
{
    int a ,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Sum = %d",a+b);
}
