#include<stdio.h>

//___Pointer__in C & C++____

int main()

{
    int No=11;

    int *p = &No;  //_* is a word of pointer_

    printf("%d\n", No);     //11
    printf("%d\n", p);      
    printf("%d\n", &No);     
    printf("%d\n", &p);        
    printf("%d\n",sizeof(No));   //Byte
    printf("%d\n",sizeof(p));
    
    printf("%d\n", *p);  //_No=*p=11_
    return 0;
}

