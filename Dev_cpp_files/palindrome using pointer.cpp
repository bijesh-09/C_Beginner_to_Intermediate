#include<stdio.h>

int main()
{
	int n,temp,r,s=0,*a;
	a=&n;
	printf("Enter any no.:  ");
	scanf("%d",a);
	temp=*a;
	while( *a >0)
	{
		r=(*a)%10;
		s=s*10+r;
		*a=(*a)/10;
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
