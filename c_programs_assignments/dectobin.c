#include<stdio.h>
int dectobin(int);
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("Equivalent of %d = %d",n,dectobin(n));
    return 0;
}

int dectobin(int x)
{
    int r,s=0,i=1;
    while (x>0)
    {
        r = x%2;
        s += r*i;
        i *= 10;
        x = x/2;
    }
    return s;
    
}