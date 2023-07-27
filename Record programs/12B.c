#include<stdio.h>
void main(int argc,char *argv[])
{
    FILE *sptr,*dptr;
    char c;
    sptr=fopen(argv[1],"r");
    dptr=fopen(argv[2],"w");
    if(sptr==NULL||dptr==NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    while((c=fgetc(sptr))!=EOF)
        fputc(c,dptr);
    printf("File copied successfully");
    fclose(sptr);
    fclose(dptr);
}