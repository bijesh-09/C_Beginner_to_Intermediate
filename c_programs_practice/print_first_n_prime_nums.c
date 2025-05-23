#include<stdio.h>
int isPrime(int);
int main()
{
    int n, count =0, num =2 ;
    printf("How many prime numbers?: ");
    scanf("%d",&n);
    while(count<n)
    {
        if(isPrime(num))
        {
            printf("%d ",num);
            count++;
        }
        num++;
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