#include<stdio.h>

//___Pointer__in C & C++____

int main()

{
    int No=11;

    int *p = &No;  //_* is a word of pointer_



    printf("%d\n",No);          
    printf("%d\n",sizeof(No));   //Byte
    printf("%p\n", &No);        //__&_for Address____%p->for pointer, for address

    return 0;
}

