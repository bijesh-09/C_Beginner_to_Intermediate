#include<stdio.h>

int fn(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fn(n-1)+fn(n-2);
	}
}

int main()
{
	int a,i,value;
	printf("Up to how much terms do u want the fibonnaci series:  ");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		printf("%d  \t",fn(i));
	}
	return 0;
}
