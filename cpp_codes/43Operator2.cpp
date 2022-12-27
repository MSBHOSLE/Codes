//
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

int main()
{
    Demo obj1;              //0     0
    Demo obj2(11);          //11    0
    Demo obj3(11,12);       //11    12


    return 0;
}