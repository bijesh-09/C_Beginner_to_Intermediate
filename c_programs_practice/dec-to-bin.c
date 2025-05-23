#include<stdio.h>

int dectobin(int);

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("Equivalent binary of %d is %d",n,dectobin(n));
    return 0;
}

int dectobin(int x){
    int r, sum = 0, i=1; 
    while (x>0)
    {
        r = x % 2;
        sum = sum + r*i;
        i = i*10;
        x = x/2;
    }
    return sum;    
    
}