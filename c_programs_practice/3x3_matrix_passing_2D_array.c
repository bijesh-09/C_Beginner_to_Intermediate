#include<stdio.h>
#include<stdlib.h>

void matrixMultiply(int [][10], int [][10], int [][10],int, int,int);

int main()
{
    int i,j, m1,n1 ,  m2,n2, a[10][10] , b[10][10] , c[10][10];

    printf("Enter the order of 1st matrix m1xn1: ");
    scanf("%d%d",&m1,&n1);

    printf("Enter the order of 2nd matrix m2xn2: ");
    scanf("%d%d",&m2,&n2);

    if (n1 != m2)
    {
        printf("Matrix multiplication not possible!");
        exit(-1);
    }

    printf("Start entering elements of 1st matrix:\n");
    for ( i = 0; i < m1; i++)
    {
        for ( j = 0; j < n1; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
   
    printf("Start entering elements of 2nd matrix:\n");
    for ( i = 0; i < m2; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    matrixMultiply(a,b,c,m1,n2,m2);

    printf("Product of given matrices:\n");
    for ( i = 0; i < m1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}

void matrixMultiply(int p[][10], int q[][10], int r[][10] ,int m1,int n2,int m2)
{
    int i,j,k, sum;
    
    for ( i = 0; i < m1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            sum =0;
            for ( k = 0; k < m2; k++)
            {
                sum += (p[i][k] * q[k][j]);
            }
            r[i][j] = sum;
        }
        
    }   
    
}