//It contains solutions for  44OperatorOverloading1.cpp

#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo(int i=0, int j=0)
        {
            A=i;
            B=j;
        }
};

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside + Operator function\n";
    return Demo(obj1.A+obj2.A, obj1.B+obj2.B);
}

int main()
{
    Demo X(10,20);              //0     0
    Demo Y(30,40);          //11    0
    Demo Ans(50,60);       //11    12

    Ans=X+Y;        // +(X+Y)

    cout<<Ans.A<<"\n";
    cout<<Ans.B<<"\n";


    return 0;
}