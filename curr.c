#include <stdio.h>
void facke_swap(float ca , float cb)
{
    float temp=0;
    temp=ca;
    ca=cb;
    cb=temp;
    printf("fake swap in function: ca=%f cb=%f\n",ca,cb);
}
void real_swap (float *pca , float*pcb)
{
    float temp =0;
    temp =*pca;
    *pca=*pcb;
    *pcb=temp;
    printf("real swap in function: ca=%f , cb=%f\n",*pca,*pcb);
}
void main()
{
    float ca,cb;
    printf("enter currency of A");
    scanf("%f",&ca);
    printf("enter currency of B");
    scanf("%f",&cb);
    facke_swap(ca , cb);
    printf("facke swap: ca=%f cb=%f\n",ca,cb);
    reeal_swap(&ca,&cb);
    printf("real swap: ca=%f  cb%f\n",ca,cb);
    
}    