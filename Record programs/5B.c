#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,m,n,p,q,k;
    printf("Enter the numbers of rows and columns of matrix A:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the number of rows and columns of matrix B:\n");
    scanf("%d%d",&p,&q);
    int A[m][n],B[p][q],C[m][q];
    if (n!=p)
    {
        printf("These matrices cnnot be multiplied");
        exit(0);
    }
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    printf("Enter the elements of matrix B:\n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d",&B[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<q;j++)
        {
            C[i][j]=0;
            for(k=0;k<n;k++)
                C[i][j]+=A[i][k]*B[k][j];
        }
    printf("MATRIX A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",A[i][j]);
        printf("\n");
    }
    printf("MATRIX B:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            printf("%d\t",B[i][j]);
        printf("\n");
    }
    printf("MATRIX C:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
}