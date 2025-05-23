#include<stdio.h>

int * sort(int);

int main()
{
    int i,n,*ptr;
    printf("n: ");
    scanf("%d",&n);
    ptr = sort(n);
    printf("sorted numbers:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}


int * sort(int n)
{
    static int a[50];
    int i, j, *ptr, temp;
    ptr = a;
    printf("enter numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }

    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if ( *(ptr+i) > *(ptr+j))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
            
        }
        
    }
    return ptr;
}