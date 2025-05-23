#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c)
			printf("Greatest is %d",a);
		
		else
			printf("Greatest is %d",c);
		
	}
	else{
		if(b>c)
			printf("Greatest is %d",b);
		
	}
	return 0;
}
