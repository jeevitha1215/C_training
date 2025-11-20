#include<stdio.h>
void main ()
{
    int a=90;
    int *p =&a;
    printf("a value is %d\n", a);
    printf("a address is %pn",p);
    printf("p points to %d",*p);

}