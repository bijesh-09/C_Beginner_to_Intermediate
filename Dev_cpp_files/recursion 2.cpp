#include<stdio.h>

int fn(int n)
{
	if(n==2)
	{
		return 2;
	}
	else
	{
		return n+ fn(n-2);
	}
}

int main(){
	int x;
	printf("Enter any even natural no. :  ");
	scanf("%d",&x);
	printf("The sum of first %d even natural no. is %d",x,fn(x));
	return 0;
}
