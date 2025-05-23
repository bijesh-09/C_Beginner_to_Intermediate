#include<stdio.h>
int main()
{
	int j=1,n=2,i, count,x;
	printf("How many prime no. do u want?  ");
	scanf("%d",&x);
	while(j<=x)
	{
		count = 0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count = count +1;
			}
		}
		if(count==2)
		{
			printf("%d \n",n);
			j=j+1;
		}
		n=n+1;
	}
	return 0;
}
