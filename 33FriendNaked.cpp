#include<iostream>
using namespace std;

//Friend Naked Class

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i=10;
            j=20;
            k=30;
        }
    friend void fun();
};

void fun()      //Naked Function
{
    Demo obj;
    cout<<"Value of i:- "<<obj.i<<"\n";
    cout<<"Value of j:- "<<obj.j<<"\n";
    cout<<"Value of k:- "<<obj.k<<"\n";
}

int main()
{
    fun();
    return 0;
}