#include<stdio.h>

int dectobin(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (dectobin(n))
    {
        printf("Palindrome");
    }
    else{
        
        printf("Not Palindrome");
    }
    
    return 0;
}

int dectobin(int x){
    int r, sum = 0; 
    int temp = x;
    while (x>0)
    {
        r = x % 10;
        sum = sum*10 + r;
        x = x/10;
    }
    if (sum == temp)
    {
        return 1;
    }
    else{
        return 0;
    }
    
    
}