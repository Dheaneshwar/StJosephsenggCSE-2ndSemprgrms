#include<stdio.h>
void main()
{
    int n,i,num;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int pos;
    printf("Enter the position to insert the element:");
    scanf("%d",&pos);
    printf("Enter the element to be inserted:");
    scanf("%d",&num);
    for(i=n-1;i>=pos;i--)
        arr[i+1]=arr[i];
    n+=1;
    arr[pos]=num;
    printf("Displaying the array after insertion\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);


}