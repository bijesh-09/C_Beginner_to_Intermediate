#include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10],great;
    printf("Enter the mxn order of the matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for ( i = 0; i < m; i++)
    {
        great = a[i][0];
        for ( j = 1; j < n; j++)
        {
            if (a[i][j] > great)
            {
                great = a[i][j];
            }
        }
        printf("Greatest of row%d = %d\n",i+1,great);
        
    }
    

    return 0;
}