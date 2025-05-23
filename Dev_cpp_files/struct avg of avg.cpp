#include<stdio.h>
struct student{
	int id;
	float phy;
	float comp;
};
struct student p[5];
int main(){
//	declaration
	int i;
	float sum=0,s=0,avg_phy,avg_comp,avg;
	printf("Enter the your id and marks of physics and computer resp \n");
//	logical part starting
	for(i=0;i<5;i++)
	{
		scanf("%d%f%f",&p[i].id,&p[i].phy,&p[i].comp);
	}
	for(i=0;i<5;i++)
	{
		sum+=p[i].phy;
	}
	for(i=0;i<5;i++)
	{
		s+=p[i].comp;
	}
	avg_phy=sum/5;
	avg_comp=s/5;
	avg=(avg_phy+avg_comp)/2;
//	logical part finished
//      printing
        printf("\n");
        for(i=0;i<5;i++)
	{
		printf("%d %f %f",p[i].id,p[i].phy,p[i].comp);
		printf("\n");
	}        
	printf("The sum of physics marks is %f\n",sum);
	printf("The sum of computer marks is %f\n",s);
	printf("The average of physics marks is %f\n",avg_phy);
	printf("The average of computer marks is %f\n",avg_comp);
	printf("The average of average marks of physics and computer is %f\n",avg);
	return 0;
}
