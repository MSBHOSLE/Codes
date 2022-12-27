#include<iostream>
using namespace std;

//Multiple Inheritance is only in C++
//Not Allowed In java

class Base1  //4 byte
{
    public:
        int A;

        Base1()
        {
            cout<<"Inside Base1 Constructor\n";
        }

        ~Base1()
        {
            cout<<"Inside Base1 Destructor\n";
        }

        void fun()
        {
            cout<<"Base1 fun";
        }
};

class Base2   //12 byte
{
    public:
        int I,J,K;

        Base2()
        {
            cout<<"Inside Base2 Constructor\n";
        }

        ~Base2()
        {
            cout<<"Inside Base2 Destructor\n";
        }

        void gun()
        {
            cout<<"Base2 gun";
        }
};

//Not Allowed In java
class Derived : public Base1, Base2   //24 byte
//class Derived : public Base1, public Base2

//Jiska Naam Pahile uska constructor call 
//IMP:-__First we Write Base2 and then Base1
//so, firstly Base2 constructor Gets Called the Base1


//class Derived : public Base1 , Base2   //24 byte
//Jiska Naam Pahile uska constructor call 
//IMP:-__First we Write Base2 and then Base1
//so, firstly Base2 constructor Gets Called the Base1

{
    public:
        int X,Y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void sun()
        {
            cout<<"Derived sun";
        }

};

int main()
{
    Derived dobj;

    cout<<"Size of Base1 :- "<<sizeof(Base1)<<"\n";


    return 0;
}
