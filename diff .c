// write a c function which will accept an arr,its size as n , and retuns the difference between first and the last element 

#include <stdio.h>
#include <stdlib.h>

int sub_arr (int arr [],int n)
{ 
    int sub=arr[0]-arr[n-1];
    return abs(sub);

}
void main()
{
    int arr[4]={11,12,15,125};
    int n=4;
    printf("%d",sub_arr(arr,n));
}