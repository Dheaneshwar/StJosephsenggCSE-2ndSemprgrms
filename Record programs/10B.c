#include<stdio.h>
struct student
{
    union
    {
        char name[20];
        int rollno;
    };
    int marks;
};
void main()
{
    int y;
    struct student stud;
    printf("Do u want to enter roll no?:");
    scanf("%d",&y);
    if (y==1)
    {
        printf("Enter roll no:");
        scanf("%d",&stud.rollno);
        printf("Rollno:%d\n",stud.rollno);
    }
    else
    {
        printf("Enter name:");
        scanf("%s",&stud.name);
        printf("Name:%s\n",stud.name);
    }
    printf("Enter marks:");
    scanf("%d",&stud.marks);
    printf("Marks:%d",stud.marks);
}