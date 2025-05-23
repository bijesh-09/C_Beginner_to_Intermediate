#include<stdio.h>
#include<math.h>

int fn(int);
int sum(int );

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Sum up to n terms of fibonnaci series = %d",sum(n));
    
    return 0;
}

int fn(int n)
{
    if (n==0)
    {
        return 0;
    }
    
    else if (n==1)
    {
        return 1;
    }
    else{
        return fn(n-1) + fn(n-2);
    }
    
}

int sum(int n)
{
    int i, s=0;
    for ( i = 0; i < n; i++)
    {
        s += fn(i);
        
        
    }
    return s;
}