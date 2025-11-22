#include <stdio.h>
enum month
{
    jan=1,
    feb,march,april,may,june,july,aug,sept,oct,nov,dec
};
void main()
{
    enum month m;
    m=may;
    char*season;
    switch(m)
    {
        case dec : case jan : case feb :
        season="winter";break;
        case march : case april : case may:
        season="summer";break;
        case june : case july : case aug :
        season ="mosoon";
        case sept : case oct : case nov: 
        season = "stroing";
        break;
    }
    printf("%d month is %s ",m,season);
}