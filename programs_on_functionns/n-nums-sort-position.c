#include<stdio.h>

void fn(int [],int);

int main()
{
    int i, n , a[100];
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter nums: ");
    for ( i = 0; i < n; i++)
    {
        
        scanf("%d",&a[i]);
    }
    fn(a,n);


    
    return 0;
}

void fn(int p[], int n)
{
    int i,j, temp;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        
        printf("%d ",p[i]);
    }

    printf("\nLargest = %d\n",p[n-1]);
    printf("3rd Largest = %d\n",p[n-3]);
    printf("Smallest = %d\n",p[0]);
    
}