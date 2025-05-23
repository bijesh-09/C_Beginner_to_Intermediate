// wap in c to take a string in main() function and pass it to an user defined function that will return the length of that string

#include<stdio.h>

int fn(char *);

int main()
{
    int value;
    char str[30];
    printf("Enter a string: ");
    scanf("%s",str);
    value = fn(str);
    printf("Length = %d", value);
    return 0;
}

int fn(char *ptr)
{
    int n;
    int i = 0;
    while ( *(ptr + i) != '\0' )
    {
        i++;
    }
    n = i;
    return n;
    
}
/*
Output:
Enter a string: ram
Length = 3
*/