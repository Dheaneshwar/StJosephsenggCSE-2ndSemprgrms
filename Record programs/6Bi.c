#include<stdio.h>
void main()
{
    char s[100],scopy[100];
    printf("Enter the string:");
    scanf("%[^\n]",&s);
    int i;
    for(i=0;s[i]!='\0';i++)
        scopy[i]=s[i];
    scopy[i]='\0';
    printf("The string: %s\n",s);
    printf("The copied string: %s",scopy);
}