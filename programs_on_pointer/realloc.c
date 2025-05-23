#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(10*sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        printf("Terminating...");
        exit(1);
    }
    int i = 0 ,sum =0,count = 0 ;
    char ch;
    do
    {
        count++;
        if (count>=10)
        {
            ptr = (int*)realloc(ptr,100*sizeof(int));
        }
        
        printf("Enter a number: ");
        scanf("%d",(ptr+i));
        sum += *(ptr+i);
        i++;
        printf("Want more?(y/n): ");
        getchar();
        ch = getchar();
    } while (ch == 'Y' || ch == 'y');
    printf("Sum = %d",sum);
    free(ptr);
    return 0;
}