#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    fptr=fopen("DATAFILE.dat","r");
    if (fptr==NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    int arr[10];
    int i=0;
    float s=0;
    while((fscanf(fptr,"%d",&arr[i]))==1)
    {
        s+=arr[i];
        i++;
    }
    float avg=s/i;
    printf("The sum of the elements:%f\n",s);
    printf("The average:%.2f",avg);
}