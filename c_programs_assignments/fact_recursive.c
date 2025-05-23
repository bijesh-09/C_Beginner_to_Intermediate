#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,fact(n));
    return 0;
}

int fact(int x)
{
    if (x==0 || x==1)
    {
        return 1;
    }
    else{
        return x*fact(x-1);
    }
    
}