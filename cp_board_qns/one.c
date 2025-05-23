//find sum of 1st five prime numbers. the loop will continue to take input from the user until the user has given five prime numbers


#include<stdio.h>


int main()
{
    int i, n, count =0, sum=0;
    while (count<=5)
    {
        printf("Enter a number: ");
        scanf("%d",&n);

        for ( i = 2; i < n; i++)
        {
            if (n%i == 0)
            {
                break;
            }
            
        }
        if (n == i)
        {
            sum += n;
            count++;
        }
        
        
    }
    printf("sum = %d",sum);
    
    return 0;
}
/*
Output:
Enter a number: 1
Enter a number: 2
Enter a number: 3
Enter a number: 4
Enter a number: 5
Enter a number: 7
Enter a number: 11
Enter a number: 13
sum = 41
*/