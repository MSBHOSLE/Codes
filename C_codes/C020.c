#include<stdio.h>

//__Array-Pointer_____(link b/w array pointer)

int main()
{
    int Arr[4] = {10,20,30,40};

    printf("arr:- %d\n", Arr);       //
    printf("&Arr:- %d\n", &Arr);      //For Whole Array_Address
    printf("&(Arr[0]):- %d\n", &(Arr[0]));


    return 0;
}