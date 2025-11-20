#include <stdio.h>
void main 
{
    int arr[2][3]={{1,2},{2,3},{3,4},{4,5}};
    for(int i=0; i<4;i++)
    {
      for (int j=0;j<2;j++)
       {
            printf("%d\n",arr[i][j]);
       }
   }
}