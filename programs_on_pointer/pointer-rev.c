//Print array in reverse using pointer

#include<stdio.h>

int main()
{
    int a[100], *ptr, n,i;
    ptr = a;

    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
        
    }
    printf("Reversed:\n");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ",*(ptr+i));
        
    }
    
    return 0;
}