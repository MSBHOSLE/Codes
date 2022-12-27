#include<iostream>
using namespace std;

namespace 
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                cout<<"___Inside Fun of Demo From Unnamed Space__..\n";
            }
    };
}

int main()
{
    Demo obj;
    obj.fun();

    return 0;
}