#include<stdio.h>

int fn(int [],int);

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
    
    printf("Greatest = %d",fn(a,n));


    
    return 0;
}

int fn(int p[], int n)
{
    int i, great;
    great = p[0];
    for ( i = 0; i < n; i++)
    {
        if (p[i] > great)
        {
            great = p[i];
        }
        
    }
    return great;
    
    
}