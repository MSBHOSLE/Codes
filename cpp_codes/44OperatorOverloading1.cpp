//It contains problems -> .2 contains solutions
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
    Demo A(10,20);              //0     0
    Demo B(30,40);          //11    0
    Demo Ans(50,60);       //11    12

    Ans=A+B;


    return 0;
}
