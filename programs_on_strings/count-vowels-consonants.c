#include<stdio.h>
int main()
{
    int i =0;
    char ch, str[30], nvowels = 0, nconsonants = 0;
    printf("Enter a sentence: ");
    gets(str);
    while (str[i] != '\0')
    {
        ch = str[i];
        if (ch != ' ')
        {
            if (ch == 'A' || ch == 'Z')
            {
                ch = ch + 32;
            }
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
            {
                nvowels++;
            }
            else
            {
                nconsonants++;
            }
            
        }
        
        
        i++;
    }
    printf("No. of vowels = %d\n",nvowels);
    printf("No. of consonants = %d",nconsonants);
    return 0;
}