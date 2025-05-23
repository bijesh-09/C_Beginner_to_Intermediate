#include<stdio.h>
 int main()
 {
 	int i=2,s=0,temp,n,r;
 	printf("Up to which no. u want the terms");
 	scanf("%d",&n);
 	for(i=2;i<=n;i=i+2)
 	{
 		temp=i;
 		while(i>0)
 		{
 			r=i%10;
 			s=s*10+r;
 			i=i/10;
		 }
		 if(temp%3!=0 && temp%4!=0)
		 {
		 	if(s!=temp)
		 	{
		 		printf("%d \n",temp);
			 }
		 }
	 }
	 return 0;
 }
