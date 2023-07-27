#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],scopy[100];
    printf("Enter the string:");
    scanf("%[^\n]",s);
    strcpy(scopy,s);
    printf("The string:%s\n",s);
    printf("The copied string:%s\n",scopy);

}