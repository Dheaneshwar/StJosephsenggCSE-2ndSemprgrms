#include<stdio.h>
void towerofhanoi(int,char,char,char);
void main()
{
    int n;
    printf("Enter the number of disks:");
    scanf("%d",&n);
    towerofhanoi(n,'A','C','B');
}
void towerofhanoi(int n, char frompeg, char topeg, char auxpeg)
{
    if (n==1)
        printf("Move 1 disk from %c peg to %c peg\n",frompeg,topeg);
    else
    {
        towerofhanoi(n-1,frompeg,auxpeg,topeg);
        printf("Move %d disk from %c peg to %c peg\n",n,frompeg,topeg);
        towerofhanoi(n-1,auxpeg,topeg,frompeg);
    }
}