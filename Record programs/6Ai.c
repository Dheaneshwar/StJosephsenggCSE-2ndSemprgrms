#include<stdio.h>
void main()
{
    int i,n;
    char s[100];
    printf("Enter the string:");
    scanf("%[^\n]",&s);
    for(i=0;s[i]!='\0';i++);
    printf("The length of the string :%d",i);
}