//Void1.c
//Pointer created value memory allocated_____and Initialised

#include<stdio.h>
int main()
{
    int No1=10;
    int No2=20;
    int No3=30;

    int *p = NULL;  //Pointer Created

    p= &No1;           //pointer initialised
    printf("%d\n",*p);

    p= &No2;
    printf("%d\n",*p);

    p= &No3;
    printf("%d\n",*p);

    return 0;
}
