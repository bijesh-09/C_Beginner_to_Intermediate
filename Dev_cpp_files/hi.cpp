#include<stdio.h>

int fn(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else 
	{
		return n + fn(n-1);
	}
}

int main()
{
	int x, value;
	printf("Enter any natural no. :  ");
	scanf("%d",&x);
	value = fn(x);
	printf("The sum of first %d natural no. is %d",x,value);
	return 0;
}

