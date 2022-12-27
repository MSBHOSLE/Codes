
//___Array


#include<stdio.h>

int main()

{
    int Arr[5]={10,20,30,40,50};
    
    printf("Base Address of Array : %p\n", Arr);

    printf("Base Address of Array : %p\n", &Arr);

    printf("Size of Array is : %d\n", sizeof(Arr));   //20= 5 x 4byte

    return 0;
}