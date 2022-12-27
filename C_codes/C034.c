//____char & double__creates padding due to OS & Compiler
//and Arrangements of elements also change size

#include<stdio.h>

struct Demo
{
    int i;     //4
    float f;   //4
    char ch;   //1
    double d;  //8_____=total 17 byte
};             //Padding getting extra storage due to char and double

struct Demo1
{
    int i;
    float f;
    float f1;
    int i1;          //Total=16byte.
};                   //No extra storage gets allocated.

//struct Demo2 and Demo3 we are creating for technical term,
//How memory gets allocated, By sequence of Arrangement
//According to Arrangement we get Memory Allocation for,
//only char, double. That's why don't use char and double in,
//Your interview it will crate problem.

//____***(imp-points)____The concept of Padding is purely depends on the compiler & OS
//due to which size of structure may varray.

struct Demo2
{
    int i;
    float f;
    double d;
    int j; 
};             //20byte__But it will show 24 byte

struct Demo3
{
    int i;
    float f;
    char ch;
};            //9byte___and it will show 12 byte

int main()
{
    struct Demo dobj;     //Instead of 17 byte it will show 24 byte
    printf("The size of structure Demo is:- %d\n", sizeof(dobj));

    struct Demo1 d1obj;  //It will be accurate___because ther is no Double and Char
    printf("The size of structure Demo1 is:- %d\n", sizeof(d1obj));

    struct Demo2 d2obj;
    printf("The size of structure Demo2 is:- %d\n", sizeof(d2obj));

    struct Demo3 d3obj;
    printf("The size of structure Demo2 is:- %d\n", sizeof(d3obj));

    return 0;
}
