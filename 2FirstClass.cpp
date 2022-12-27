#include<iostream>
using namespace std;

class Maths
{
    public:              //Access Specifier
        int iNo1;        //Characteristics
        int iNo2;        // Characteristics

        Maths()          // Constructor (parameterised)
        {
            iNo1 = 0;
            iNo2 = 0;
        }

        Maths(int A, int B) // Constructor
        {
            iNo1 = A;
            iNo2 = B;
        }

        ~Maths()        //Destructor
        {
            // Destructor;
        }

        int Addition() // Behaviour
        {
            return iNo1 + iNo2;
        }

        int Subtraction() // Behaviour
        {
            return iNo1 - iNo2;
        }
};

int main()
{

    Maths mobj1;
    Maths mobj2(11,10);

    int Ret=0;

    Ret=mobj2.Addition();
    cout<<"Addition is:- " << Ret;

    return 0;
}