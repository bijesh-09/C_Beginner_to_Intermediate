#include<stdio.h>
int main()
{
    char str[30];
    int i = 0;
    printf("Enter a string: ");
    while ( (str[i] = getchar() ) != '\n' )
    {
        i++;
    }
    str[i] = '\0';
    i = 0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
    

    return 0;
}