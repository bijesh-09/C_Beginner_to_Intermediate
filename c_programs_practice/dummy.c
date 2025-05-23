#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k, a,b,c,d, p[10][10], q[10][10], r[10][10], sum;

    printf("Enter the order of 1st matrix: ");
    scanf("%d%d",&a,&b);
    
    printf("Enter the order of 2nd matrix: ");
    scanf("%d%d",&c,&d);

    if(b != c){
        printf("Multiplication not possible");
        exit(-1);
    }
    
    printf("Enter the elements of 1st matrix: ");
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            scanf("%d",&p[i][j]);
        }
        
    }
    
    printf("Enter the elements of 2nd matrix: ");
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < d; j++)
        {
            scanf("%d",&q[i][j]);
        }
        
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < d; j++)
        {
            sum=0;
            for ( k = 0; k < b; k++)
            {
                sum += p[i][k] * q[k][j];
            }
            r[i][j] = sum;
        }
        
    }
    printf(" matrix:\n ");
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < d; j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }


    return 0;
}