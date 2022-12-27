#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                cout<<"Inside Fun of Demo From Marvel..\n";
            }
    };

    class Hello
    {
        public:
            int x,y;

    };
}

namespace Infosystems
{
    class Demo
    {
        public:
            int a,b;
            
            void fun()
            {
                cout<<"Inside Fun of Demo From Infosys..\n";
            }

    };
    
}


int main()
{
    Marvellous::Demo Obj1;
    Obj1.fun();
    Infosystems::Demo Obj2;
    Obj2.fun();

//Another Way
    using namespace Marvellous;
    using namespace Infosystems;

    return 0;
}