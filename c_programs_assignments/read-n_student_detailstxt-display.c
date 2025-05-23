// Task #5: WAP in C to read the file created in the previous task using the concept of fscanf()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int roll;
    char name[30], address[50];
    float marks;
    FILE *fp;
    fp = fopen("n_student_details.txt","r");
    if (fp == NULL)
    {
        printf("Error opening file!");
        exit(-1);
    }
    printf("Reading contents from n_student_details.txt\n");
    printf("Displaying the contents:\n");
    while ( (fscanf(fp,"%s %d %f %s",name,&roll,&marks,address)) != EOF )
    {
        printf("Name = %s\t Roll Number = %d\t Marks = %.2f\t Address = %s\n",name,roll,marks,address);
    }
    
    fclose(fp);
    return 0;
}