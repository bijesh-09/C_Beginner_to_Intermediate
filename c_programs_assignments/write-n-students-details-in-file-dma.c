#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    char *name, *address;
    float *marks;
    int *roll;

    name =(char*)malloc(50*sizeof(char));
    roll =(int*)malloc(50*sizeof(int));
    marks =(float*)malloc(50*sizeof(float));
    address =(char*)malloc(50*sizeof(char));

    int n , *ptr = &n;
    FILE *fp;
    fp = fopen("student_details.txt","w");
    printf("How many students: ");
    scanf("%d",ptr);
    
    for ( i = 0; i < *ptr; i++)
    {
        printf("Enter name, roll number, marks and address of student_%d:\n",i+1);
        scanf("%s%d%f%s",name,roll+i,marks+i,address);
        fprintf(fp,"Name = %s\t Roll Number = %d\t Marks = %.2f\t Address = %s\n",name,*(roll+i),*(marks+i),address);
    }
    printf("File Written!");
    free(name);
    free(roll);
    free(marks);
    free(address);
    fclose(fp);
    return 0;
}