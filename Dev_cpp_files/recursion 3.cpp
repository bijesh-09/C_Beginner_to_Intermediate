#include<stdio.h>

int fn(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+ fn(n-1);
	}
}

int main(){
	int x;
	printf("Enter any natural no. :  ");
	scanf("%d",&x);
	printf("The sum of first %d natural no. is %d",x,fn(x));
	return 0;
}
