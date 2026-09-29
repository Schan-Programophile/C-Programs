#include<stdio.h>
 struct student {
     char USN[20];
     char name[50];
     int age;
     int marks;
 };
int main()
{
    struct student s;

    printf("enter your name:\n");
    scanf("%s", s.name);

    printf("enter your USN:\n");
    scanf("%s", s.USN);

    printf("enter your age:\n");
    scanf("%d", &s.age);

    printf("enter your marks:\n");
    scanf("%d",&s.marks);

    if(s.age>=20)
    {
        if (s.marks>=65)
        {
           printf("you are eligible for admission!");
        }
    else
        {
        printf("your marks are too less!");
            }
    else 
    {
        printf("youre too young!");
    } 
           
}
