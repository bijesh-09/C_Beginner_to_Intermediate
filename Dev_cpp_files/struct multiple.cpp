#include<stdio.h>
struct product
{
	float price;
	char name[30];
};
struct product p[5];
int main(){
	int i;
	float sum=0,avg;
	printf("Enter the price and name of the product resp \n");
	for(i=0;i<5;i++)
	{
		scanf("%f%s",&p[i].price,p[i].name);
	}
	for(i=0;i<5;i++)
	{
		sum=sum +p[i].price;
	}
	avg=sum/5;
	for(i=0;i<5;i++)
	{
		printf("%s",p[i].name);
		printf("\n");
	}
	printf("The sum and its average of the given product's prices are %f and %f",sum,avg);
	return 0;
}
