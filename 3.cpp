#include<iostream>

using namespace std;

//Class Declaration
class Maths
{
    public:            //Access Specifier
        int iNo1;      //Characteristics
        int iNo2;      //Characteristics

    Maths()            //Constructor (Default)
    {
        int iNo1=0;
        int iNo2=0;
    }

    Maths(int A, int B)  //Constructor(Parameterised)
    {
        iNo1=A;
        iNo2=B;
    }

    int Addition()        //Behaviors
    {
        return iNo1 + iNo2;
    }

    int Subtraction()     //Behaviors
    {
        return iNo1-iNo2;
    }
};

int main()
{
    Maths mobj1;

    Maths mobj2(11,10);

    return 0;
}
