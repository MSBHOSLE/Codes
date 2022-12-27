#include<stdio.h>
#include<stdlib.h>

// Prototype of functions

//                  void * malloc(int size);

int main()
{
    int Arr[5];   //Static Memory Allocation

    int *p=NULL;

    p = (int*)malloc(sizeof(int) * 5);

    //use memory___line 10 la Allocate zaali li memory aaata use kara

    free(p);

    //code

    return 0;   //Memory of Arr gets Deallocated at this point
}