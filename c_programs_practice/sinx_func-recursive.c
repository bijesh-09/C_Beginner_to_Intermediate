#include<stdio.h>
#include<math.h>

float sum(float , int);

int fact(int);

int main()
{
    int n;
    float x,result;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("How many terms: ");
    scanf("%d",&n);
    result = sum(x,n);
    printf("Value of sin(%f) = %f",x,result);
    return 0;
}

int fact(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else{
        return n * fact(n-1);
    }
    
}

float sum(float a, int n)
{
    if(n==1)
    {
        return a;
    }
    else{
        return (pow(-1,n+1) * pow(a,2*n-1) / fact(2*n-1)) + sum(a,n-1);
    }
}