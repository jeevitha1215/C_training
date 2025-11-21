#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[100];
    int age;
    float marks;
};

void main()
{
    struct student s1;
    struct student *p=&s1;
    strcpy(p->name,"jeevitha");
    p-> age=19;
    p-> marks=89.9;
    printf("%d ", p->age);
    printf("%s ",p->name);
    printf("%f ",p->marks);
}