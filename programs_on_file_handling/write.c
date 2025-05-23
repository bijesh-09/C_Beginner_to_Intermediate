#include<stdio.h>
int main()
{
    char name[20], address[30];
    int roll;
    float marks;
    int i,n;
    FILE *fp;
    fp = fopen("student.txt","w");
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter name roll marks and address:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%s%d%f%s",name, &roll, &marks, address);
        fprintf(fp,"%s %d %.2f %s\n",name, roll, marks, address);
    }
    printf("File written!");
    
    fclose(fp);
    return 0;
}