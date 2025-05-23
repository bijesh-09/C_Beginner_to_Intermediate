//wap in c to take the array as input and check whether it is balanced or not

#include<stdio.h>
int main()
{
    int i,n, a[100], neven = 0, nodd = 0;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter the numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            neven++;
        }
        else{
            nodd++;
        }
        
    }
    if (neven = 2*nodd)
    {
        printf("Balanced Array");
    }
    else{
        printf("Not Balanced Array");

    }
    return 0;
    
}

/*
Output:
Enter n: 6
Enter the numbers: 1 2 3 4 6 8
Balanced Array
*/