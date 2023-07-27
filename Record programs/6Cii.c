#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    printf("Enter the string 1:");
    gets(s1);
    printf("Enter the string 2:");
    gets(s2);
    if(strcmp(s1,s2)==0)
        printf("They r same");
    else
        printf("They r not same");
}