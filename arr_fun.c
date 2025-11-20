#include <stdio.h>

int addarr(int arr[],int n)
{
    for (int i=0;i<size;i++)
    {
        result=result+arr[i];

    }
    return result ;
}
void main ()
{
     int arr[3]={11,12,15};
    int size = 3;
    printf("%d", addarr(arr , size));
}