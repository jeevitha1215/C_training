// writer a c function which will accepcts three parameters l,b,h and returns volume of the cube 
#include <stdio.h>
int volume(int l, int b, int h)
{
    int cube = l*b*h;
    return cube;
}
voide main ()
{
    int l=11;
    int b=12;
    int h=15;
    printf("volume of cube %d", volume(l,b,h));
}