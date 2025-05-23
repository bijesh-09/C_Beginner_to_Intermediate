// Task #6: WAP in C to read a file num.txt containing integers. Write all the prime numbers from the file num.txt to another file prime.txt.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num;
    FILE *nfp,*pfp;
    nfp = fopen("num.txt","r");
    pfp = fopen("prime.txt","w");
    if (nfp == NULL)
    {
        printf("Error opening file!");
        exit(-1);
    }
    printf("Copying only prime numbers from num.txt to prime.txt\n");
    while ( (fscanf(nfp,"%d",&num)) != EOF )
    {
        for ( i = 2; i < num; i++)
        {
            if (num%2 == 0)
            {
                break;
            }
            
        }
        if (num == i)
        {
            
            fprintf(pfp,"%d ",num);
        }
        
    }
    printf("Prime numbers copied!");
    
    fclose(nfp);
    fclose(pfp);
    return 0;

}