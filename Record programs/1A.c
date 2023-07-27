#include<stdio.h>
void main()
{
    float r,area,circumference;
    printf("Enter the radius:");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=3.14*r*2;
    printf("The area :%.2f\n",area);
    printf("The circumference:%.2f",circumference);
}