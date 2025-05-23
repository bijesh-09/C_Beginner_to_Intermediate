#include<stdio.h>
#include<math.h>

int main()
{
	int n,temp,r,s=0;
	printf("Enter any no.:  ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		s=s+pow(r,3);
		n=n/10;
	}
	if(s==temp)
	{
		printf("The no. %d is Armstrong no. ",temp);
	}
	else
	{
		printf("The no. %d is not Armstrong no. ",temp);
	}
}
