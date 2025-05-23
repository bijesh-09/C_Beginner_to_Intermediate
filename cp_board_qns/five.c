/*
wap to create a function that will generate 5 random integers , which are stored in static array and return their pointer to main() 
function such that the elements of array will be printed in main() function
*/

#include<stdio.h>

int * fn()
{
    static int a[5] = {5,13,14,54,32};
    return a;
}

int main()
{
    int *ptr;
    int i;
    ptr = fn();
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i) );
    }
    
    return 0;
}
/*
Output:
5 13 14 54 32
*/