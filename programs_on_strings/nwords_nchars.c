#include<stdio.h>
int main()
{
    int i =0;
    char str[30];
    int nchars, nwords = 1;
    printf("Enter a sentence: ");
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
    printf("No. of words: %d\n",nwords);
    printf("No. of characters: %d",nchars);
    
    return 0;
}