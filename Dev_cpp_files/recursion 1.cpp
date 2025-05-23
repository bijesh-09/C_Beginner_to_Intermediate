#include<stdio.h>

int fn(int n=2)
{
	while(n<100)
	{
		return n+ fn(n+2);
	}
}

int main()
{
	int x;
	printf("The sum of first even natural no. less than 100 is %d",fn(x));
	return 0;
}
