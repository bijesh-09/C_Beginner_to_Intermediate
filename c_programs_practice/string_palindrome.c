#include<stdio.h>
#include<string.h>

int main()
{
    char name[30][30],temp[30];
    int i,j,n;

    printf("Enter no. of  employees:\n");
    scanf("%d",&n);
    getchar();
    printf("Enter employees name:\n");
    for ( i = 0; i < n; i++)
    {
        gets(name[i]);
    }
   for ( i = 0; i < n-1; i++)
   {
        for ( j = i+1; j < n; j++)
        {
            if ( strcmp(name[i],name[j])>0 )
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
            
        }
        
   }
   printf("Sorted list of employees:\n");
   for ( i = 0; i < n; i++)
   {
        printf("%s\n",name[i]);
   }
   
   
    return 0;
}