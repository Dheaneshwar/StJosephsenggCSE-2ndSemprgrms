#include<stdio.h>
int factorial(int);
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial of %d: %d",n,factorial(n));
}
int factorial(int n)
{
    if (n==0)
        return (1);
    return( n* factorial(n-1));
}