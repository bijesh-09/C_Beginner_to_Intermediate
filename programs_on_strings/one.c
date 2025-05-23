#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    printf("Entered string is: %s",str);
    return 0;
}