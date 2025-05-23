#include<stdio.h>
#include<string.h>
int main()
{
    char str[30], rstr[30];
    printf("string: ");
    scanf("%s",str);
    strcpy(rstr,str);
    strrev(rstr);
    if ( strcmp(str,rstr) == 0 )
    {
        printf("palindrome");
    }
    else{
        
        printf("not palindrome");
    }
    

    return 0;
}