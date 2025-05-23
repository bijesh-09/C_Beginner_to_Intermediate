#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char name[200][200],temp[200];
    printf("How many employees: ");
    scanf("%d",&n);
    getchar();
    printf("Enter the name of employees:\n");
    for ( i = 0; i < n; i++)
    {
        gets(name[i]);
    }
    
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if ( strcmp(name[i],name[j]) > 0 )
            {
                strcpy( temp,name[i] );
                strcpy( name[i],name[j] );
                strcpy( name[j],temp );
            }
            
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        printf("%s\n",name[i]);
    }
    
    
    
    return 0;
}