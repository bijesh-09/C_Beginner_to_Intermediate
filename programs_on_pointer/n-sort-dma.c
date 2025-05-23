#include<stdio.h>
#include<stdlib.h>

int * sort(int);

int main()
{
    int i,n,*p;
    printf("n: ");
    scanf("%d",&n);
    p = sort(n);
    printf("sorted numbers:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    return 0;
}

int * sort(int n)
{
    int i, j, *ptr, temp;
    ptr = (int*)malloc(n*sizeof(int)); // ptr = &a[0] = a
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        printf("Terminating...");
        exit(1);
    }
    

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