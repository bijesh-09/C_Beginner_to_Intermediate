//Print array in reverse using pointer

#include<stdio.h>

int main()
{
    int a[100], *ptr, n,i;
    
    printf("Enter n: ");
    scanf("%d",&n);

    ptr = &a[n-1];

    printf("Enter numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",a+i);
        
    }
    printf("Reversed:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",*(ptr-i));
        
    }
    
    return 0;
}