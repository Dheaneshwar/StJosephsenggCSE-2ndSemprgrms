#include<stdio.h>
#include<stdlib.h>
struct account
{
    char name[100];
    long amount;
    int accno;
};
void create()
{
    struct account acc;
    FILE *fptr;
    fptr=fopen("account.bin","wb");
    if (fptr==NULL)
    {
        printf("Error in opening");
        exit(0);
    }
    int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Enter name:");
        scanf("%s",&acc.name);
        acc.accno=i;
        printf("Enter amount:");
        scanf("%ld",&acc.amount);
        fwrite(&acc,sizeof(struct account),1,fptr);
    }
    fclose(fptr);
}
void view()
{
    struct account acc;
    FILE *fptr;
    fptr=fopen("account.bin","rb");
   if (fptr==NULL)
    {
        printf("Error in opening");
        exit(0);
    }
    while (1)
    {
        int empno;
        printf("Enter the empno (-1 to stop):");
        scanf("%d",&empno);
        if (empno==-1)
        {
            printf("Stopping\n");
            break;
        }
        fseek(fptr,(empno-1)*sizeof(struct account),0);
        fread(&acc,sizeof(struct account),1,fptr);
        printf("Empno:%d Empname:%s Amount:%ld\n",acc.accno,acc.name,acc.amount);
    }
}
void transfer()
{
    FILE *fptr;
    fptr=fopen("account.bin","rb+");
    if (fptr==NULL)
    {
        printf("Error in opening");
        exit(0);
    }
    struct account fromacc,toacc;
    int fromaccno,toaccno;
    long tamount;
    printf("Enter the from acc no:");
    scanf("%d",&fromaccno);
    printf("Enter the to acc no:");
    scanf("%d",&toaccno);
    printf("Enter the amount to be transferred:");
    scanf("%d",&tamount);
    fseek(fptr,(fromaccno-1)*sizeof(struct account),0);
    fread(&fromacc,sizeof(struct account),1,fptr);
    fseek(fptr,(toaccno-1)*sizeof(struct account),0);
    fread(&toacc,sizeof(struct account),1,fptr);
    fromacc.amount-=tamount;
    toacc.amount+=tamount;
    fseek(fptr,(fromaccno-1)*sizeof(struct account),0);
    fwrite(&fromacc,sizeof(struct account),1,fptr);
    fseek(fptr,(toaccno-1)*sizeof(struct account),0);
    fwrite(&toacc,sizeof(struct account),1,fptr);
    printf("Transferred Successfully\n");
    fclose(fptr);
}
void main()
{
    int ch;
    while (1)
    {
        printf("______________MENU_______________\n");
        printf("1.CREATE\n2.VIEW\n3.TRANSFER\n4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case(1):
                create();
                break;
            case(2):
                view();
                break;
            case(3):
                transfer();
                break;
            case(4):
                exit(0);
                break;
        }
    }
}