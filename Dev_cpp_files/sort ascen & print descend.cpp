#include<stdio.h>
int main()
{
	int temp,i,j,num,n[100];
	printf("How many numbers are there?  ");
	scanf("%d",&num);
	printf("Enter the numbers: \t");
	for(i=0;i<num;i++)
	{
		scanf("%d",&n[i]);
	}
        //	logical part
        for(i=0;i<num-1;i++)
        {
        	for(j=i+1;j<num;j++)
        	{
        		if(n[i]>n[j])
        		{
        			temp=n[i];
        			n[i]=n[j];
        			n[j]=temp;
			}
		}
	}
	printf("\n");
	// printing in descending order
	for(i=num-1;i>=0;i--)
	{
		printf("%d \n",n[i]);
	}
	return 0;
}
