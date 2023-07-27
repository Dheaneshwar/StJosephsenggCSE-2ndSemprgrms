#include<stdio.h>
void main()
{
    int *arr,i,n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    int s=0;
    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
        s+=*(arr+i);
    }
    printf("Displaying the array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }
    printf("Sum of the elements:%d",s);
}