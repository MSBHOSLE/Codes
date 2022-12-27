#include<iostream>
using namespace std;

class Circle
{
    public:                 //Access Specifier
        float Pi;           //char
        float Radius;       //char

        Circle()        //Default Constructor
        {
            Pi=3.14;
            Radius=0.0;
        }

        Circle(float A, float B)        //Parameterized Constructor
        {
            Pi=A;
            Radius=B;
        }

        // ~Circle()   //Destructor
        // {
        //     cout<<"Tysm_Program Ends Here!_....\n";
        // }

        void Display()              //Concrete Method:-Method with body function
        {
            cout<<"Value of Radius is:- "<<Radius<<"\n";
        }

        virtual float Area() = 0;               //_abstract method:-Method without body/function
        virtual float Circumference() = 0;      //_abstract method:-
                                                //_Method without body/function

};
class Marvellous : public Circle
{
    public:
        Marvellous() : Circle()
        {
        }

        Marvellous(float X, float Y) : Circle(X,Y)
        {
        }

        float Area()                             //Concrete Method:-Method with body function
        {
            float Ans= Pi * Radius * Radius;
            return Ans;
        }

        float Circumference()               //Concrete Method:-Method with body function
        {
            float Ans=0.0;
            Ans= 2 * Pi * Radius;
            return Ans;
        }

};

//Circle class is Contains Pure virtual
//_that's why we can't use/Create Object of Circle
//thats' why created Marevellous clss...and now crating]
//_object of Marevellous Class


int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14, 10.89);

    float fret=0.0;

    fret=mobj2.Area();
    cout<<"Area is:- "<<fret<<"\n";

    fret=mobj2.Circumference();
    cout<<"Circumference is:- "<<fret<<"\n";

    return 0;
}
