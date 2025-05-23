#include<stdio.h>
int main()
{
    int n,*ptr=&n,a[100],i;
    printf("How many numbers?: ");
    scanf("%d",ptr);
    printf("Start entering numbers:\n");
    for ( i = 0; i < *ptr; i++)
    {
        scanf("%d",a+i);
    }
    printf("Entered numbers are:\n");
    for ( i = 0; i < *ptr; i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}