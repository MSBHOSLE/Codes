//structure8.c
#include<stdio.h>

union Uno     //8 byte
{
    int i;
    float f;
    double d;
};               

struct Suo     //16byte
{
    int i;
    float f;
    double d;
}; 

int main()
{
    struct Suo sobj;
    union Uno uobj;

    printf("The size of structure is:- %d\n",sizeof(sobj));
    printf("The size of union is:- %d\n", sizeof(uobj));

    return 0;
}