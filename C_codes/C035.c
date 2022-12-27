//
//#=Pre-processor
#include<stdio.h>

//when we use #pragma pack () statement compiler will allocate the,
//memory depends on value that we provide inside the pack ().

#pragma pack(1)  //1byte_2_4_8_16_(2nd power)

//Then there is no Padding size due to #pragma pack()

struct Demo2
{
    int i;      //4
    float f;    //4
    double d;   //8
    char ch;    //1
    int j;      //4 

    //___total 21 byte
};

int main()
{
    struct Demo2 d2obj;
    //It will show exact value
    printf("The size of structure Demo2 is:- %d\n", sizeof(d2obj));
}