#include<iostream>
using namespace std;


class Base
{
    public:                             //Access Specifier
        int A,B;

        void fun()                      //Fuction Definition
        {
            cout<<"Base Fun\n";
        }

        void gun(int i)                 //Fuction Definition
        {
            cout<<"Base Gun With 1 Integer\n";
        }

        void gun(int i, int j)          //_Overloaded Fuction Definition___
        {                               //Because name is already used in lin15
            cout<<"Base Gun with 2 Integer\n";
        }

};


class Derived : public Base
{
    public:
        int X,Y;

        void sun()                      //Fuction Definition
        {
            cout<<"Derived sun\n";
        }

        void fun()                      //Fuction ReDefinition
        {                               //__Due to line 10_Baap kade aaahe pora kade
            cout<<"Derived Fun\n";      //Re define kela gela
        }

};


int main()
{
    Derived dobj;
    dobj.fun();     //Jiska object uska fun call hoga
    dobj.gun(11);
    dobj.gun(11,21);
    dobj.sun();

    return 0;
} 