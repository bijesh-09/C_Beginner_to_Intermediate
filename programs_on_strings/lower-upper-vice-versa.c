#include<stdio.h>
int main()
{
    int i=0;
    char str[30];
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0')
    {
        if( str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        else{
            
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("result = %s",str);
    
    
    return 0;
}