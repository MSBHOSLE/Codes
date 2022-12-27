#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        float f;
        double d;
    
    //Void fun (Demo * this, int A)
    void fun(int A)
    {
        cout<<"Inside Fun\n";
        cout<<this->i<<"\n";    //-> Arrow Operator
    }

    //int gun(Demo * this, int A, int B)
    int gun(int A, int B)
    {
        cout<<"Inside Gun\n";
    }
};

int main()
{
    Demo obj1;            //100
    Demo obj2;            //200

    obj1.i=100;
    obj2.i=200;


    obj1.fun(11);         //fun(&obj,11)    fun(100,11)
    obj2.fun(11);      //fun(&obj,11)      fun100,11)


    return 0;
}