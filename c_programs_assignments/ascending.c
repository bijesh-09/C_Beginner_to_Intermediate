#include<stdio.h>
int main()
{
    int temp, n,a[100],i,j;
    printf("How many numbers: ");
    scanf("%d",&n);   
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   printf("Largest = %d\n",a[n-1]);
   printf("Smallest = %d\n",a[0]);
   printf("Third largest = %d",a[n-3]);
    return 0;
}