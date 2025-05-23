#include<stdio.h>

void fn(int [10][10],int , int);

int main()
{
    int m, n, i, j, a[10][10];
    printf("Enter mxn: ");
    scanf("%d%d",&m,&n);
    
    printf("Enter matrix: ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        
    }
    fn(a,m,n);
    

    return 0;
}

void fn(int p[10][10],int m, int n)
{
    int i,j;
    int great;
    for ( i = 0; i < m; i++)
    {
        great = p[i][0];
        for ( j = 0; j < n; j++)
        {
            if (p[i][j] > great)
            {
                great = p[i][j];
            }
            
            
        }
        printf("Greatest of row_%d = %d\n",i+1,great);
        
    }
}
