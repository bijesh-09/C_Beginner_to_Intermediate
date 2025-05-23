#include<stdio.h>

int main()
{
	int i;
	for(i=2;i<=200;i=i+2)
	{
		if(i%3!=0 && i%4!=0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
	
}
