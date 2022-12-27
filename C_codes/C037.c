// structure8.c
#include <stdio.h>

struct Suo // 16byte
{
    int i;    // 4
    float f;  // 4
    double d; // 8
};

union Uno // 8 byte
{
    int i;     //4
    float f;   //4
    double d;  //8
};

union Uno1 // 8 byte
{
    int i;    // 4
    float f;  // 4
    double d; // 8
};

int main()
{
    struct Suo dobj;
    union Uno hobj;
    union Uno1 h1obj;

    printf("The size of structure is:- %d\n", sizeof(dobj));
    printf("The size of union is:- %d\n", sizeof(hobj));

    //example like 3 swimming pool
    //we want 3 sweet dish from shop
    dobj.i=11;
    dobj.f=90.8;
    dobj.d=90.5;

    //If we want only one sweet from 3 option of a shop
    //but we can one Ladoo in box still
    hobj.i=18;
    printf("hobj i:- %d\n", hobj.i);
    hobj.f=10.11;
    printf("hobj f:- %f\n", hobj.f);

    //there is no space for ladoo, not a single ladoo
    h1obj.d = 10.111811;
    printf("h1obj d:- %lf\n", h1obj.d);  //_%lf=d=lobf float
    h1obj.i = 18;
    printf("h1obj i:- %d\n", h1obj.i);

    printf("The size of structure dobj is:- %d\n", sizeof(dobj));
    printf("The size of union hobj is:- %d\n", sizeof(hobj));
    printf("The size of union h1obj is:- %d\n", sizeof(h1obj));
    

    return 0;
}