#include<iostream>
using namespace std;

int main()
{
    int * p = NULL;

    p = new int[5];   //_[]__:- It's for Array
    //p = (int*)malloc(5 * sizeof(int));____for C

    //use the memory
    
    delete []p;   //__[]___to delete whole Array__[] is imp before delete__
    //There is no search thing in java
    //free(p);______for C

    return 0;
}
