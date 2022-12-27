#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
        int B;
        void fun() {cout<<"Inside Base fun\n";}      //1000
        void gun() {cout<<"Inside Base gun\n";}     //2000
        void sun() {cout<<"Inside Base sun\n";}     //3000
};

class Derived : public Base
{
    public:
        int X,Y;
        void gun() {cout<<"Inside Derived gun\n";}              //4000
        void run() {cout<<"Inside Derived run\n";}              //5000
        void mun() {cout<<"Inside Derived mun\n";}      //6000
};

int main()
{                                                              //Due to virtual
//     cout<<"Size of Base Class:- "<<sizeof(Base)<<"\n";        //8_-> byte
//     cout<<"Size of Derived Class:- "<<sizeof(Derived)<<"\n";  //16->  byte

    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;

    bp->fun();      //CALL 1000
    bp->gun();      //Call 2000
    bp->sun();      //call 3000




    return 0;
}
