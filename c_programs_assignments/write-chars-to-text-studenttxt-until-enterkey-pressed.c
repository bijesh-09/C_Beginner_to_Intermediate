//Task #1: WAP in C to write characters to a text file student.txt until the user press enter key.
#include<stdio.h>
int main()
{
    char ch;
    FILE *fptr;
    fptr = fopen("student.txt","w");
    printf("Start entering characters:\n");
    while ((ch=getchar()) !='\n')
    {
        fputc(ch,fptr);
    }
    printf("File Written!");
    fclose(fptr);
    return 0;
}