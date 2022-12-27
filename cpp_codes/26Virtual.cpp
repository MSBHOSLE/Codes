#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
        int B;
        void fun() {cout<<"Inside Base fun\n";}
        virtual void gun() {cout<<"Inside Base gun\n";}
        void sun() {cout<<"Inside Base sun\n";}
};

class Derived : public Base
{
    public:
        int X,Y;
        void gun() {cout<<"Inside Derived gun\n";}
        void run() {cout<<"Inside Derived run\n";}
        void mun() {cout<<"Inside Derived mun\n";}
};

int main()
{                                                              //Due to virtual
    cout<<"Size of Base Class:- "<<sizeof(Base)<<"\n";        //8_->16 byte
    cout<<"Size of Derived Class:- "<<sizeof(Derived)<<"\n";  //16-> 24 byte

    return 0;
}