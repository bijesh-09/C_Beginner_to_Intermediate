#include<stdio.h>
struct product
{
	int id;
	char name[30];
};
struct product p;
int main()
{
	printf("Enter the id and name of product resp \n");
	scanf("%d%s",&p.id,p.name);
	printf("The product's id and name are %d and %s",p.id,p.name);
	return 0;
}
