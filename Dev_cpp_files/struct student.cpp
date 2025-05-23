#include<stdio.h>
struct student{
	int id;
	char name[50];
	int phy_marks;
	int chem_marks;
	int comp_marks;
	float total;
	float cent;
};
int main(){
	int ts,i,sum1=0,sum2=0,sum3=0,avg1,avg2,avg3;
	printf("Enter total no. of student: ");
	scanf("%d",&ts);
	struct student s[ts];
	for(i=0;i<ts;i++){
		printf("Enter id and name of student resp: ");
		scanf("%d %s",&s[i].id,s[i].name);
		printf("Enter marks of physics (out of 100): ");
		scanf("%d",&s[i].phy_marks);
		printf("Enter marks of chemistry (out of 100): ");
		scanf("%d",&s[i].chem_marks);
		printf("Enter marks of computer (out of 100): ");
		scanf("%d",&s[i].comp_marks);
		s[i].total= s[i].phy_marks + s[i].chem_marks + s[i].comp_marks;
		s[i].cent = s[i].total/3;
	}
	printf("\n Student's details: \n");
	printf("Id\tName\tPhy\tChem\tComp\tTotal\tPercentage\n");
	for(i=0;i<ts;i++){
		printf("%d\t%s\t%d\t%d\t%d\t%.2f\t%.2f%%\n",s[i].id,s[i].name,s[i].phy_marks,s[i].chem_marks,s[i].comp_marks,s[i].total,s[i].cent);
	}
	for(i=0;i<ts;i++){
		sum1+=s[i].phy_marks;
		sum2+=s[i].chem_marks;
		sum3+=s[i].comp_marks;
	}
	avg1=sum1/ts;
	avg2=sum2/ts;
	avg3=sum3/ts;
	printf("Average percentage of physics = %d%% \n",avg1);
	printf("Average percentage of chemistry = %d%% \n",avg2);
	printf("Average percentage of computer = %d%% \n",avg3);
	return 0;
}
