#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20], address[30];
    int roll;
    float marks;
    int i,n;
    FILE *fp;
    fp = fopen("student.txt","r");
    if (fp == NULL)
    {
        printf("File not found!");
        exit(1);
    }
    while ( fscanf(fp,"%s%d%f%s",name, &roll, &marks, address) != EOF )
    {
        printf("%s %d %.2f %s\n",name, roll, marks, address);
    }
    
    
    fclose(fp);
    return 0;
}