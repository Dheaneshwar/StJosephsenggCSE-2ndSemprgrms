#include<stdio.h>
void sorta(int [],int);
void main()
{
    int arr[10],n,i;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sorta(arr,n);
}
void sorta(int a[10],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Displaying the array after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}