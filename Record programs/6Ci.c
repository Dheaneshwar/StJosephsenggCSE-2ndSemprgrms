#include<stdio.h>
int cmp(char[],char[]);
void main()
{
    char s1[100],s2[100];
    printf("Enter the string 1:");
    gets(s1);
    printf("Enter the string 2:");
    gets(s2);
    if(cmp(s1,s2)==0)
        printf("They r same");
    else
        printf("They r not same");
}
int cmp(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i]!='\0' && b[i]!='\0')
    {
        if (a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    return(flag);
}