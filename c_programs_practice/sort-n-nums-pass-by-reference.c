#include<stdio.h>

int sort(int [], int);
int main()
{
    int i,n,a[100];
    printf("How many numbers: ");
    scanf("%d",&n);   
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Largest = %d\n",a[n-1]);
    printf("Smallest = %d\n",a[0]);
    printf("Third largest = %d",a[n-3]);
    return 0;
}

int sort(int p[], int x)
{
    int i,j,temp;
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
