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

    public:
        Base()
        {
            int i=10;
            int j=20;
            int k=30;  
        }   

        void fun()
        {
            cout<<"Value of public i :- "<<i<<"\n";
            cout<<"Value of private j :- "<<j<<"\n";
            cout<<"Value of protected k :- "<<k<<"\n";
        }

};


int main()
{
    Base dobj;
    cout<<"Value of public i :- "<<dobj.i<<"\n";
    cout<<"Value of private j :- "<<dobj.j<<"\n";
    cout<<"Value of protected k :- "<<dobj.k<<"\n";

    dobj.fun();

    return 0;
}