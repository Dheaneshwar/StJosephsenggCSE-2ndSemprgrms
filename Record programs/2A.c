#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("Largest no:%d",a);
    else if(b>a && b>c)
        printf("Largest no:%d",b);
    else
        printf("Largest no:%d",c);
}