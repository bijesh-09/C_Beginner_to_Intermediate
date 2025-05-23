#include<stdio.h>
int main()
{
	int id,roll,i;
	char name[50];
	FILE  *f;
	f = fopen("abc.txt","w");
	for(i=0;i<2;i++)
	{
		printf("Enter student's id name and roll number resp \n");
	        scanf("%d %s %d",&id,name,&roll);
	        fprintf(f,"%d %s %d\n",id,name,roll);
	}
	fclose(f);
	return 0;	
}
