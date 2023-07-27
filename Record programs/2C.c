#include<stdio.h>
void main()
{
    int orignum,num,rem,res;
    printf("Enter the number:");
    scanf("%d",&orignum);
    num=orignum;
    res=0;
    while(num!=0)
    {
        rem=num%10;
        res+=rem*rem*rem;
        num/=10;
    }
    if(orignum==res)
        printf("%d is an armstrong number",orignum);
    else
        printf("%d is not an armstrong number",orignum);
}