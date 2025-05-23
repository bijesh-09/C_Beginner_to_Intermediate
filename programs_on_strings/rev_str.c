#include<stdio.h>
#include<string.h>
int main()
{
    char str[30], rstr[30];
    printf("string: ");
    scanf("%s",str);
    strcpy(rstr,str);
    strrev(rstr);
    printf("Reversed: %s",rstr);

    return 0;
}