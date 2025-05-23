#include<stdio.h>
int isPrime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(isPrime(n))
    {
        printf("Prime");
    }
    else{
        printf("Composite");
    }
    
    return 0;
}
int isPrime(int x)
{
        int i;
        for ( i = 2; i < x; i++)
        {
            if (x%2==0)
            {
                return 0;
            }
            
        }
        return 1;
        
}