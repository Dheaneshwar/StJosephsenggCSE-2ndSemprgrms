#include<stdio.h>
void main()
{
    char s1[100],s2[100];
    printf("Enter the string str1:");
    gets(s1);
    printf("Enter the string str2:");
    gets(s2);
    int i=0,j=0;
    for(i=0;s1[i]!='\0';i++);
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    printf("String1:%s\n",s1);
    printf("String2:%s",s2);
}