#include<stdio.h>
#include<string.h>
int main()
{
    int i ,  j , k ;
    char str[30];
    printf("Enter a string: ");
    gets(str);
    for ( i = 1; i <= strlen(str); i++)
    {
        for ( k = strlen(str); k > i; k--)
        {
            printf(" ");
        }
        
        for ( j = 0; j < i; j++)
        {
            printf("%c",str[j]);
        }
        for (j = i - 2; j >= 0; j--)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    

    return 0;
}