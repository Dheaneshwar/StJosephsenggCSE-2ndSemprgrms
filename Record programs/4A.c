#include<stdio.h>
void main()
{
    int n,i,s;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements below\n");
    s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    printf("The sum of elements is %d",s);
}