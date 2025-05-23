#include<stdio.h>
int main()
{
    int i,j,k=0;
    char str[] = "Programming";
    for ( i = 10; i >= 1; i--)
    {
        for ( j = k; j <= i; j++)
        {
            putchar(str[j]);
        }
        printf("\n");
        k++;
    }
    
    return 0;
}