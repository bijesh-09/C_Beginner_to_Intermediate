#include<stdio.h>
#include<math.h>

float sum(int);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Sumof the seires = %.2f",sum(n));
    return 0;
}

float sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    else{
        return pow(-1,n+1) * 1/(2*n-1) + sum(n-1);
    }
    
}