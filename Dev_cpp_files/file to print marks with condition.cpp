#include<stdio.h>
int main(){
	int  id,age,marks,x=1;
	char name[50];
	FILE *f;
	f=fopen("practice.txt","w");
	while(x==1){
		printf("Enter student's id");
		scanf("%d",&id);
		printf("Enter student's name");
		scanf("%s",name);
		printf("Enter student's age");
		scanf("%d",&age);
		printf("Enter student's marks");
		scanf("%d",&marks);
		if(marks>90 && age>18 && age<45)
		{
			fprintf(f,"%d %s %d %d ",id,name,age,marks);
		}
		printf("Press 1 to continue");
		scanf("%d",&x);
	}
	fclose(f);
	return 0;
}
