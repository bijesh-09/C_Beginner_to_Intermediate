#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i=0,nwords=1,nchars;
    printf("Enter a sentence:\n");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            nwords++;
        }
        i++;
    }
    nchars = i;
    printf("Total no. of words = %d",nwords);
    printf("Total no. of characters = %d",nchars);
    return 0;
}