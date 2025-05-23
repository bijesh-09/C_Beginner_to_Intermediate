#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr=&n;

    float *fptr,sum,avg;

    fptr = (float*)malloc(50*sizeof(float));

    if (fptr == NULL)  // Check if memory allocation was successful
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("How many numbers: ");
    scanf("%d",ptr);

    printf("Start entering numbers:\n");
    for ( i = 0; i < *ptr; i++)
    {
        scanf("%f",fptr+i);
        sum += *(fptr+i);
    }

    avg = sum / *ptr;

    printf("Sum = %.2f\n",sum);
    printf("Average = %.2f",avg);

    free(fptr);

    return 0;
}