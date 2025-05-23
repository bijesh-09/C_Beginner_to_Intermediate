#include<stdio.h>
int main()
{
	struct student 
	{
		int id;
		char name [40];
		float marks;
	};
	int i,j,ts;
	
	printf("How many students are there ?: ");
	scanf("%d",&ts);
	struct student s[ts],temp;
	
	printf("Enter id, name and marks of students resp using space for each individual \n");
	for(i=0;i<ts;i++)
	{
		scanf("%d %s %f",&s[i].id,s[i].name,&s[i].marks);
	}
	
	for(i=0;i<ts-1;i++)
	{
		for(j=0;j<ts-i-1;j++)
		{
			if(s[j].marks>s[j+1].marks)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<ts;i++)
	{
		printf("%d %s %.2f",s[i].id,s[i].name,s[i].marks);
		printf("\n");
	}
	return 0;
}
