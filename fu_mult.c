//write a funtion which will multiply three numbers and call it by reference
#include <stdio.h>
void multi_ref(int*a ,int*b, int*c)
{
    int multi=(*a) * (*b) * (*c);
    printf("d",multi);
}
void main()
{ 
    int a=2;
    int b=3;
    int c=2;
    multi_ref(&a,&b,&c);
}