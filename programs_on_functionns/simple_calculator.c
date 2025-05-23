#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

int diff(int a, int b)
{
    int diff;
    diff = a-b;
    return diff;
}
int product(int a, int b)
{
    int c;
    c = a*b;
    return c;
}
float divide(int a, int b)
{
    float c;
    if (b == 0)
    {
        printf("Division not possible!\n");
        printf("Denominator is zero which results undefined value\n");
        printf("Terminating...\n");
        exit(1);
    }
    
    c = a/b;
    return c;
}

int main()
{
    int choice;
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter any choice: ");
    getchar();
    scanf("%d",&choice);

    switch (choice)
    {
    case 1: printf("Sum = %d", sum(a,b) ); break;
    case 2: printf("Difference = %d", diff(a,b) ); break;
    case 3: printf("Product = %d", product(a,b) ); break;
    case 4: printf("Quotient = %.2f", divide(a,b) ); break;
    
    default:
        printf("Invalid choice!");
        break;
    }
    return 0;
}