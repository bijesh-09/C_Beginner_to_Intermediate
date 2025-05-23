#include<stdio.h>
int fn(int n)
{
	int i,a;
	for(i=1;i<=100;i++)
	{
		a[i]=i;
	}
	return a;
}
int main(){
	int a[100],i;
	printf("The list of first 100 natural no. is");
	for(i=1;i<=100;i++)
	{
		printf("%d \n",fn(a[i]));
	}
	return 0;
}
