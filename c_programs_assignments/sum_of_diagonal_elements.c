#include<stdio.h>
int main()
{
    int i,j,k, sum=0 , a[3][3];
    printf("Enter the elements of 3x3 matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i==j || (i+j)==2)
            {
                sum += a[i][j];
            }
            
        }
        
    }

    
    printf("The sum of diagonal elements of given matrix is: %d ",sum);
    
    return 0;
}