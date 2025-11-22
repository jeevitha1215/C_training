// write a c program which add three numbers call it by reference
#include <stdio.h>
void add_ref(int *a, int *b, int*c)
{
    int add= *a + *b + *c;
    printf("%d",add);
}
void main()
{
    int a=12;
    int b=11;
    int c=15;
    add(&a,&b,&c);
}