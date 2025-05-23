#include<stdio.h>
int main()
{
    int n = 5; // Total number of rows for the upper half

    // Upper half of the diamond
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}