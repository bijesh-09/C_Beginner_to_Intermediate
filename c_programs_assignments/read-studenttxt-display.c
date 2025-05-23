// Task #2: WAP in C to read the file student.txt created in the previous task.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fptr;
    fptr = fopen("student.txt","r");
    if (fptr == NULL)
    {
        printf("Error opening file!");
        exit(-1);
    }
    printf("Contents of file:\n");
    while ((ch = fgetc(fptr)) != EOF )
    {
        putchar(ch);
    }
    
    fclose(fptr);
    return 0;
}