#include<stdio.h>
int main()
{
    int m,n,i,j,a[100][100];
    printf("Enter the row and column of matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements: ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    printf("Entered matrix:\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }  
        printf("\n");
    }
    printf("Transposed matrix:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);
        }  
        printf("\n");
    }
    return 0;
}