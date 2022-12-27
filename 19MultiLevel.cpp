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

class DerivedX : public Derived
{
    public:
        int i;
        int j;
        DerivedX()
        {
            cout<<"Inside DerivedX Constructor\n";
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }

        void sun()
        {
            cout<<"Inside Derived Sun\n";
        }

};


int main()
{
    cout<<"Size of Base :- "<<sizeof(Base)<<"\n";             //8 byte
    cout<<"Size of Derived :- "<<sizeof(Derived)<<"\n";     //16 byte
    cout<<"Size of DerivedX :- "<<sizeof(DerivedX)<<"\n";      //24 byte

    DerivedX dobj;     //Static Memory Allocation

    dobj.fun();
    dobj.gun();
    dobj.sun();



    //Dynamic Memory Allocation___(c: malloc instead of new)
    // Derived * ptr = NULL;

    // ptr = new Derived;       
    // //___16 byte_for Derived_Son + Dad = 16 Byte___4 char:A,B,X,Y

    // ptr->fun();
    // ptr->gun();
    
    // delete ptr;

    return 0;

}