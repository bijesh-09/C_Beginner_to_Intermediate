#include<stdio.h>

int sum(int [], int);
int main()
{
    int great,i,n,a[100];
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Start entering numbers:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    great = sum(a,n);
    printf("Greatest = %d",great);
    return 0;
}

int sum(int p[], int x)
{
    int i;
    int num = p[0] ;
    for ( i = 1; i < x; i++)
    {
        if (p[i] > num)
        {
            num = p[i];
        }
        
    }
    return num;
}