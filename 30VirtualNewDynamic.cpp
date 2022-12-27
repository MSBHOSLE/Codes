#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
        int B;
        virtual void fun() {cout<<"Inside Base fun\n";} //1000
        virtual void gun() {cout<<"Inside Base gun\n";} //2000
        virtual void sun() {cout<<"Inside Base sun\n";} //3000
        virtual void run() {cout<<"Inside Base run\n";} //4000
};

class Derived : public Base
{
    public:
        int X,Y;
        void gun() {cout<<"Inside Derived gun\n";}        //5000
        virtual void run() {cout<<"Inside Derived run\n";} //6000
        virtual void mun() {cout<<"Inside Derived mun\n";} //7000
};

int main()
{                                                              //Due to virtual
    Base *bp = NULL;

    bp = new Derived; //UpCasting

    bp->fun();      //Base Fun get called
    bp->gun();      //Derived Gun
    bp->sun();      //Base Sun
    bp->run();      //Derived Run
    //bp->mun();      //_no mun in base->that's why,
                    //mo need to see in Derived Clss
    return 0;
}