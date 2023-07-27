#include<stdio.h>
struct COMPLEX
{
    int realpart;
    int imaginarypart;
};
struct COMPLEX add(struct COMPLEX,struct COMPLEX);
void main()
{
    struct COMPLEX n1,n2,result;
    n1.realpart=1;
    n1.imaginarypart=2;
    n2.realpart=1;
    n2.imaginarypart=2;
    result=add(n1,n2);
    printf("%d+%di",result.realpart,result.imaginarypart);
}
struct COMPLEX add(struct COMPLEX n1,struct COMPLEX n2)
{
    struct COMPLEX result;
    result.realpart=n1.realpart+n2.realpart;
    result.imaginarypart=n1.imaginarypart+n2.imaginarypart;
    return result;

}