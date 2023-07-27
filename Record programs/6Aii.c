#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    printf("Enter the string:");
    scanf("%[^\n]",&s);
    printf("The length of the string: %ld",strlen(s));
}