#include<stdio.h>
#include<math.h>

float sum(int,int);

int fact(int);

int main()
{
    int x,n;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Sumof the seires sin(%d) = %.2f",x,sum(x,n));
    return 0;
}

int fact(int n)
{
    if (n==1 || n== 0)
    {
        return 1;
    }
    else{
        return n * fact(n-1);
    }
    
}

float sum(int x,int n)
{
    if (n==1)
    {
        return x;
    }
    else{
        return pow(-1,n+1) * (pow(x,2*n-1) / fact(2*n-1)) + sum(x,n-1);
    }
    
}