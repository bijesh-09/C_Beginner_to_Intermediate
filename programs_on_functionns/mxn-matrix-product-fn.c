#include<stdio.h>
#include<stdlib.h>

void fn(int [10][10], int [10][10], int [10][10], int, int, int, int);

int main()
{
    int m1, n1, m2, n2, i, j;
    int a[10][10], b[10][10], c[10][10];
    printf("Enter m1xn1: ");
    scanf("%d%d",&m1,&n1);
    
    printf("Enter m2xn2: ");
    scanf("%d%d",&m2,&n2);

    if (n1 != m2)
    {
        printf("Matrix multiplication not possible!\n");
        printf("Terminating...");
        exit(1);
    }
    
    
    printf("Enter matrix1: ");
    for ( i = 0; i < m1; i++)
    {
        for ( j = 0; j < n1; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter matrix2: ");
    for ( i = 0; i < m2; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    fn(a,b,c,m1,n1,m2,n2);

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

void fn(int p[10][10], int q[10][10], int r[10][10], int m1, int n1, int m2, int n2)
{
    int i,j,k;
    int sum;
    for ( i = 0; i < m1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            sum = 0;
            for ( k = 0; k < m2; k++)
            {
                sum += p[i][k] * q[k][j];
            }
            r[i][j] = sum;
            
        }
        
    }
    
    
}