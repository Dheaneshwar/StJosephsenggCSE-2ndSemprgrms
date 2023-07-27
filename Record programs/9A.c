#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *str;
    int n;
    printf("Enter the limiting value of the string:");
    scanf("%d",&n);
    str=(char *)malloc(n*sizeof(char));
    printf("Enter the string:");
    scanf(" ");
    gets(str);
    printf("The text entered: %s",str);
    free(str);
}