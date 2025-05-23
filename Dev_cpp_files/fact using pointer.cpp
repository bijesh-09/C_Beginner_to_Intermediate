#include<stdio.h>
int main()
{
	int i,n,fact=1,*c,*b;
	b=&n;
	printf("Enter any number \n");
	scanf("%d",&n);
	c=&fact;
	for(i=1;i<=*b;i++)
	{
		*c = (*c) * i;
	}
	printf("Factorial is %d",*c);
	return 0;
}
