//A file named num.dat contains the integers and real numbers. Wap in c to copy the integers only from num.dat to int.dat

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,x;
    float num;
    FILE *ifp, *nfp;
    ifp = fopen("int.dat","w");
    nfp = fopen("num.dat","r");
    if (nfp == NULL)
    {
        printf("File not found!");
        exit(1);
    }
    while ( fscanf(nfp , "%f", &num) != EOF )
    {
        x = num * 10;
        r = x % 10;
        if (r == 0)
        {
            fprintf( ifp , "%.0f ", num);
        }
        
    }
    printf("File written!");
    
    

    return 0;
}
/*
Output:
File written!

In num.dat: 1 2 3.5 4 6.3
In int.dat: 1 2 4 (only integers are copied from num.dat to int.dat)
*/