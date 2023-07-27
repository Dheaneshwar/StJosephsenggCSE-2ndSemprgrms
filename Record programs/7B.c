#include<stdio.h>
void swap(int *,int *);
void main()
{
    int n1,n2;
    printf("Enter numebr 1:");
    scanf("%d",&n1);
    printf("Enter number 2:");
    scanf("%d",&n2);
    printf("Values in main before function call: n1=%d n2=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("Values in main after function call: n1=%d n2=%d\n",n1,n2);
}
void swap(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("Values in function after changed: n1=%d n2=%d\n",*n1,*n2);
}