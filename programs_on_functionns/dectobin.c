#include<stdio.h>

int dectobin(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Eq. Binary of %d = %d",n,dectobin(n));
    return 0;
}

int dectobin(int x)
{
    int i = 1, sum = 0, temp, r;
    temp = x;
    while (x>0)
    {
        r = x % 2;
        sum = sum + r * i;
        i = i * 10;
        x = x / 2;
    }
    return sum;
    
    
    
}