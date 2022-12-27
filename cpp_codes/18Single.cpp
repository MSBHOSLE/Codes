#include<iostream>
using namespace std;

class Base    //___8 byte
{
    public:
        int A,B;     //Created two characteristics

        Base()    //Behaviour
        {
            cout<<"Inside Base Constructor\n";
        }

        ~Base()      //Behaviour
        {
            cout<<"Inside Base Destructor\n";
        }

        void fun()    //fun is method_____Behaviour
        {
            cout<<"Inside Base fun\n";
        }

};

class Derived : public Base   //Inheritance___: colon____8 byte

{
    public:
        int X;
        int Y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void gun()
        {
            cout<<"Inside Derived Gun\n";
        }

};

int main()
{
    Derived * ptr = NULL;

    ptr = new Derived;       //Dynamic Memory Allocation___(c: malloc instead of new)
    //___16 byte_for Derived_Son + Dad = 16 Byte___4 char:A,B,X,Y

    ptr->fun();
    ptr->gun();
    
    delete ptr;

    return 0;
}