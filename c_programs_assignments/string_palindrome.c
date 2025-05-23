#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rstr[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(rstr,str);
    strrev(rstr);
    if ( strcmp(str,rstr) == 0 )
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}