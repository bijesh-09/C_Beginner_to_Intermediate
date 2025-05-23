#include<stdio.h>
int check(int n){
	
	if(n>0){
		return 1;
	}
	
	else if(n==0){
		return 0;
	}
	else{
		return 22;
	}
}
int main()
{
	int n, value;
	printf("Enter any number: ");
	scanf("%d",&n);
	value = check(n);
	if(value == 1){
		printf("pOSITIVE NUMBER");
	}
	else if ( value == 0)
	{
		printf("Zero Number");
	}
	else if(value == 22)
	{
		printf("Negative number");
	}
	return 0;
}

