#include<stdio.h>
#include<math.h>
void findroots(float,float,float);
void main()
{
    float a,b,c;
    printf("Enter the coefficient of x^2:");
    scanf("%f",&a);
    printf("Enter the coefficient of x:");
    scanf("%f",&b);
    printf("Enter the constant:");
    scanf("%f",&c);
    findroots(a,b,c);
}
void findroots(float a,float b,float c)
{
    float discriminant=(b*b)-(4*a*c);
    float root1,root2;
    if (discriminant>0)
    {
        printf("The roots are real and unequal\n");
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Root1:%f\n",root1);
        printf("Root2:%f\n",root2);
    }
    else if (discriminant==0)
    {
        printf("The roots are real and equal.\n");
        root1=root2=(-b)/(2*a);
        printf("Root1:%f\n",root1);
        printf("Root2:%f\n",root2);
    }
    else if (discriminant<0)
    {
        printf("The roots are imaginary\n");
        float realpart=(-b)/(2*a);
        float imaginarypart=sqrt(-discriminant)/(2*a);
        printf("Root1:%f+%fi\n",&realpart,&imaginarypart);
        printf("Root2: %f-%fi\n",&realpart,&imaginarypart);
    }
}