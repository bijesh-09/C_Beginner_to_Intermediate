#include<stdio.h>

int main()
{
	int i,n=2,count;
	while(count<=100)
	{
		if(n%3!=0 && n%4!=0)
		{
			printf("%d \n",n);
			count+=1;
		}
		n=n+2;
	}
	return 0;
	
}
