#include<stdio.h>
void main()
{
    int x,y,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        for(y=x;y<n;y++)
            printf(" ");
        for(k=1;k<2*x;k++)
            printf("%d",k);
        printf("\n");
    }
    for(x=n-1;x>=1;x--)
    {
        for(y=n;y>x;y--)
            printf(" ");
        for(k=1;k<2*x;k++)
            printf("%d",k);
        printf("\n");
    }
}