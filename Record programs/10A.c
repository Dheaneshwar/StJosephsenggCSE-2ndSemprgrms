#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int empno;
    char empname[20];
    int bpay,npay,allow,ded;
};
void main()
{
    struct employee *pemp;
    int i,n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    pemp=(struct employee *)malloc(n*sizeof(struct employee));
    for (i=0;i<n;i++)
    {
        printf("Enter the emp number:");
        scanf("%d",&((pemp+i)->empno));
        printf("Enter the name:");
        scanf("%s",&((pemp+i)->empname));
        printf("Enter the bpay,allow,ded:");
        scanf("%d%d%d",&((pemp+i)->bpay),&((pemp+i)->allow),&((pemp+i)->ded));
        (pemp+i)->npay=((pemp+i)->bpay+(pemp+i)->allow)-(pemp+i)->ded;
    }
    printf("Emp.no\tEmpname\tbpay\tallow\tded\tnpay\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d",(pemp+i)->empno,(pemp+i)->empname,(pemp+i)->bpay,(pemp+i)->allow,(pemp+i)->ded,(pemp+i)->npay);
        printf("\n");
    }
}