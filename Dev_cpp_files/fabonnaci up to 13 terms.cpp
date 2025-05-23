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
	int i;
	for(i=0;i<13;i++)
	{
		printf("%d  \t",fn(i));
	}
	return 0;
}
