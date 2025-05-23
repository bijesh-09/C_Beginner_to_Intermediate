#include<stdio.h>
struct student
{
	int rollnum;
	char name[40];
	float sub1_marks;
	float sub2_marks;
	float sub3_marks;
	float total;
	float cent;
};
int main(){
	int n,i;
	
	printf("How many number of students are there? \n");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter roll number and name of student resp using space \n");
		scanf("%d%s",&s[i].rollnum,s[i].name);
		
		printf("Enter marks of sub1 out of 100\t \n");
		scanf("%f",&s[i].sub1_marks);
		
		printf("Enter marks of sub1 out of 100\t \n");
		scanf("%f",&s[i].sub2_marks);
		
		printf("Enter marks of sub1 out of 100\t \n");
		scanf("%f",&s[i].sub3_marks);	
		
		s[i].total=s[i].sub1_marks+s[i].sub2_marks+s[i].sub3_marks;
		s[i].cent=s[i].total/3;
	}
	printf("\n");
	
	printf("rollnumber\t\tname\tsub1_marks\tsub2_marks\tsub3_marks\ttotal marks\tpercentage\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f%% \n",s[i].rollnum,s[i].name,s[i].sub1_marks,s[i].sub2_marks,s[i].sub3_marks
		,s[i].total,s[i].cent);
		
	}
	return 0;
	
	
	
}
