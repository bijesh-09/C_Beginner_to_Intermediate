#include<stdio.h>
int main(){
	int reg,x=1;
	char name[50],gen[10],adr[50];
	FILE *f;
	f=fopen("hello.txt","w");
	while(x==1){
		printf("\nEnter your reg_no., name and address: ");
	        scanf("%d %s %s",&reg,name,adr);
	        printf("Press m for male and f for female: ");
	        scanf("%s",gen);
	        fprintf(f,"\n %d %s %s %s",reg,name,adr,gen);
	        printf("Press 1 to continue: ");
	        scanf("%d",&x);
	}
	fclose(f);
	f=fopen("hello.txt","r");
	while(fscanf(f,"%d %s %s %s",&reg,name,adr,gen)!=EOF){
		printf("%d %s %s %s\n",reg,name,adr,gen);
	}
	fclose(f);
	return 0;
}
