#include<stdio.h>

void fn(int *,int);

int main()
{
    int i,n, a[50], *ptr;
    ptr =a;
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Enter numbers:\n");;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));;
    }

    fn(ptr,n);
    

    return 0;
}

void fn(int *p,int n)
{
    int i,j,temp;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if ( *(p+i) > *(p+j) )
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
            
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    
}