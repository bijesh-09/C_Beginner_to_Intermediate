#include<stdio.h>

int main()
{
	int n,temp,r,s=0;
	printf("Enter any no.:  ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==temp)
	{
		printf("The no. %d is palindrome no. ",temp);
	}
	else
	{
		printf("The no. %d is not palindrome no. ",temp);
	}
	return 0;
}
