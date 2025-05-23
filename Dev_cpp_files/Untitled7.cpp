#include<stdio.h>
int main(){
	int a;
	int b;
	printf("enter a and b");
	scanf("%d%d",&a, &b);
	if(a>b)
	{
		printf("%d is bigger than %d",a,b);
	}
	else
	{
		printf("%d is smaller than %d",a,b);
	}	
}
