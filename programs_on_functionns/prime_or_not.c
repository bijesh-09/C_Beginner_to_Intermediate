#include<stdio.h>

int isPrime(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (isPrime(n))
    {
        printf("Prime");
    }
    else{
        printf("Not Prime");

    }

    return 0;
}

int isPrime(int x)
{
    int i;
    for ( i = 2; i < x; i++)
    {
        if (x%i == 0)
        {
            return 0;
        }
        
    }
    
    if (x == i)
    {
        return 1;
    }
    
    
}