#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:  //Constructor Alway written in Public
        Base()
        {
            i=10;
            j=20;
            k=30;
        }
};

class Derived : public Base
{
    public:
        void fun()
        {
            cout<<"Value of i inside Base:- "<<i<<"\n";   //Allowed
            //cout<<"Value of j inside Base:- "<<j<<"\n"; ___NA
            cout<<"Value of k inside Base:- "<<k<<"\n";   //A

        }
};

int main()
{
    Derived dobj;
    dobj.fun();
    return 0;
}