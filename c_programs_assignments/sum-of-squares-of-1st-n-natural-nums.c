#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Up to which natural number: ");
    scanf("%d",&n);
    printf("Sum of squares of %d numbers = %d",n,sum(n));
    return 0;
}

int sum(int x)
{
    if (x==1)
    {
        return 1;
    }
    else{
        return x*x + sum(x-1);
    }
    
}