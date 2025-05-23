#include<stdio.h>
#include<stdlib.h>
int main()
{
    int temp, n,i,j,*ptr=&n;
    int *iptr;

    iptr = (int*)malloc(50*sizeof(int));

    printf("How many numbers: ");
    scanf("%d",ptr);   

    printf("Enter the numbers: ");
    for(i=0; i<*ptr ;i++)
    {
        scanf("%d",iptr+i);
    }

    for(i=0; i<*ptr-1 ;i++)
    {
        for(j=i+1; j<*ptr ;j++)
        {
            if( *(iptr+i) > *(iptr+j))
            {
                temp = *(iptr+i);
                *(iptr+i) =  *(iptr+j);
                *(iptr+j) = temp;
            }
        }
    }
    printf("Sorted in ascending order:\n");
    for(i=0; i<*ptr ;i++)
    {
        printf("%d ",*(iptr+i));
    }
    free(iptr);
    return 0;
}