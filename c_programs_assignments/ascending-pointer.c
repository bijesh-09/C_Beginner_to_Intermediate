#include<stdio.h>
int main()
{
    int temp, n,a[100],i,j,*ptr=&n;
    printf("How many numbers: ");
    scanf("%d",ptr);   
    printf("Enter the numbers: ");

    for(i=0; i<*ptr ;i++)
    {
        scanf("%d",a+i);
    }

    for(i=0; i<*ptr-1 ;i++)
    {
        for(j=i+1; j<*ptr ;j++)
        {
            if( *(a+i) > *(a+j))
            {
                temp = *(a+i);
                *(a+i) =  *(a+j);
                *(a+j) = temp;
            }
        }
    }
    printf("Sorted in ascending order:\n");
    for(i=0; i<*ptr ;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}