//Hello big Dabba__ Demo chotta Dabba
//We create a small structure inside a big structure
#include<stdio.h>

struct Demo
{
    int A;
    int B;
};

struct Hello
{
    int C;
    float D;
    struct Demo dobj;
};

int main()
{
//
    struct Hello hobj;

    hobj.C=11;
    hobj.D =10.9;

//Accessing Dabyat Dabba___tiffin mein tiffin
    hobj.dobj.A =21;
    hobj.dobj.B =51;

    return 0;
}