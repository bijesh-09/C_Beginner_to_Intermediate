#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    int *ptr , count =0, sum = 0;
    ptr = (int*)malloc(10*sizeof(int));
    do
    {
        count++;
        if(count>=10)
        {
            ptr = realloc(ptr,100*sizeof(int));
        }
        printf("Enter a number:");
        scanf("%d",ptr);
        sum += *ptr;
        while (getchar() != '\n');
        printf("Want to continue?(y/n)");
        scanf("%c",&ch);
    } while (ch=='y' || ch == 'Y');

    printf("Total entered numbers: %d",count);
    printf("Sum of entered numbers: %d",sum);
    free(ptr);
    
    return 0;
} 