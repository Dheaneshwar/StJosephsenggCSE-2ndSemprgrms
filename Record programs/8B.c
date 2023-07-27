#include<stdio.h>
int fibonacci(int);
void main()
{
    int n,i;
    printf("Enter the number of series:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",fibonacci(i));
    }
}
int fibonacci(int n)
{
    if (n==1||n==0)
        return(n);
    return(fibonacci(n-1)+fibonacci(n-2));
}