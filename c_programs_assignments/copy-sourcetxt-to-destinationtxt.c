// Task 3: WAP in C to copy a file source.txt into destination.txt
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *sfp,*dfp;
    sfp = fopen("source.txt","r");
    dfp = fopen("destination.txt","w");
    if (sfp == NULL)
    {
        printf("Error opening file!");
        exit(-1);
    }
    printf("Copying contents of source.txt to destination.txt \n");
    while ((ch = fgetc(sfp)) != EOF)
    {
        fputc(ch,dfp);
    }
    printf("File Copied!");
    fclose(sfp);
    fclose(dfp);
    return 0;
}