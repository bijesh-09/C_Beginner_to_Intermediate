#include<stdio.h>

int isArmstrong(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (isArmstrong(n))
    {
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");

    }

    return 0;
}

int isArmstrong(int x)
{
    int i, sum = 0, temp, r;
    temp = x;
    while (x>0)
    {
        r = x % 10;
        sum += r*r*r;
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