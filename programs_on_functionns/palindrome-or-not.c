#include<stdio.h>

int isPalindrome(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (isPalindrome(n))
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");

    }

    return 0;
}

int isPalindrome(int x)
{
    int i, sum = 0, temp, r;
    temp = x;
    while (x>0)
    {
        r = x % 10;
        sum = sum * 10 + r;
        x = x / 10;
    }
    if (sum == temp)
    {
        return 1;
    }
    else{
        return 0;
    }
    
    
    
}