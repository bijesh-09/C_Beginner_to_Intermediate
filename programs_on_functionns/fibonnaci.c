#include<stdio.h>
#include<math.h>

int fn(int);

int main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ",fn(i));
        
    }
    
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