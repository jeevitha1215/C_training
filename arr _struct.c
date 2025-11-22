//create a structure with 3 variable name of a car maximum speed  price
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct car
{
    char name [100];
    int spd[100];
    int price;

};
void main()
{
    int n;
    printf("enter the number of the cars");
    scanf("%d",&n);
    struct car c[3];
    for(int i=0; i<n; i++)
    {
        printf("enter the name of the car: ");
        scanf("%s",c[i].name);

        printf("enter the spd of the car:  ");
        scanf("%d",&c[i].spd);

        printf("enter the price of the car:  ");
        scanf("%d",&c[i].price);
    }
    for (int i=0; i<n; i++)
    {
        printf("%s\n",c[i].name);
        printf("%d\n",c[i].spd);
        printf("%d\n",c[i].price);
    }
}    
