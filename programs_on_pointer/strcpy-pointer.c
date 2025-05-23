#include<stdio.h>
int main()
{
    int i=0;
    char str1[50], str2[50];
    printf("string: ");
    scanf("%s",str1);
    while ( *(str1+i) !='\0')
    {
        *(str2+i) = *(str1+i); 
        i++;
    }
    *(str2+i) = '\0';//assigning null terminator to str2
    printf("%s",str2);
    
    return 0;
}