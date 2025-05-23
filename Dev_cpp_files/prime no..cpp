#include<stdio.h>
int main()
{
	int N=1,n=2,i, count;
	while(N<=10)
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
		}
		n=n+1;
		N+=1;
	}
	return 0;
}
