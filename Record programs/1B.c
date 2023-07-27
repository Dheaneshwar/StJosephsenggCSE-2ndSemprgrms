#include<stdio.h>
void main()
{
    int p,r,t,amount;
    printf("Enter the principle,rate and time:\n");
    scanf("%d%d%d",&p,&r,&t);
    amount=(p*r*t)/100;
    printf("Simple interest:%d",amount);
}