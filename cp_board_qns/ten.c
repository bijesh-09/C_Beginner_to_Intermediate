/*
create a structure called "Student" with members name, age, and total marks. wap in c to input data for two students, display the name 
of the student having higher total marks
*/

#include<stdio.h>

struct Student
{
    char name[30];
    int age;
    float total_marks;
};

int main()
{
    int i;
    struct Student s[2], temp;
    for ( i = 0; i < 2; i++)
    {
        printf("Enter name , age and total marks of the student_%d: ",i+1);
        scanf("%s%d%f", s[i].name, &s[i].age, &s[i].total_marks);
    }

    if ( s[0].total_marks < s[1].total_marks )
    {
        temp = s[0];
        s[0] = s[1];
        s[1] = temp;
    }
    
    printf("Name od student having higher marks: %s", s[0].name);

    return 0;
}
/*
Output:
Enter name , age and total marks of the student_1: ram 18 90
Enter name , age and total marks of the student_2: sam 18 100
Name od student having higher marks: sam
*/