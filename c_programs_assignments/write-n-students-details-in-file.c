// Task #4: WAP in C to write the name, roll, marks and address of n students to a data file using the concept of fprintf().
#include<stdio.h>
int main()
{
    int n,i,roll;
    char name[30], address[50];
    float marks;

    FILE *fp;
    fp = fopen("n_student_details.txt","w");
    printf("How many students: ");
    scanf("%d",&n);
    
    for ( i = 0; i < n; i++)
    {
        printf("Enter name, roll number, marks and address of student_%d:\n",i+1);
        scanf("%s%d%f%s",name,&roll,&marks,address);
        fprintf(fp,"%s %d %.2f %s\n",name,roll,marks,address);
    }
    printf("File Written!");
    fclose(fp);
    return 0;
}