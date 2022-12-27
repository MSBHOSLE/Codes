#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;          //Instance Variable
        int j;
        static int k;    //Declaration
        static int l;    //Class Variable

        Demo()    // Default Constructor_(for non-static initialisation)
        {
            i = 0;
            j = 0;
        }

        Demo(int a, int b)  // Parameterized Constructor
        {
            i =a;
            j =b;
        }

        //Behaviour :- Static / non-Static

        void fun()      // Instance Method
        {
            // static + non-static

            cout << "Inside Non-Static Method Fun :- \n";
            cout<<"Value of i : "<<this->i<<"\n";
            cout<< "Value of j : "<< this->j << "\n";
            cout<<"Value of k : " <<k<< "\n";
            cout<< "Value of l : " <<l<< "\n";
        }

        static void gun()  // Class method
        {
            // Static

            cout<<"Inside Static Method Gun :- \n";
            cout<< "Value of k : "<<k<<"\n";
            cout<< "Value of l : " <<l<<"\n";
        }
};

//After the Class and above the main Function_for Good programming

//Load time variable

int Demo::k=0;   //Initialisation  of Static
int Demo::l=18;

int main()
{
    cout << "Inside Main :- \n";
    cout << "Value of K : " << Demo::k << "\n";     //Class Variable   //0
    cout << "Value of l : " << Demo::l << "\n";     // Class Variable  //18

    Demo::gun();

    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;

    cout << "Inside Main :- \n";
    cout<<"Value of i in Obj1 : "<<obj1.i<<"\n";     //Instance Variable   //10
    cout<<"Value of i in Obj2 : "<<obj2.i<<"\n";                           //20

    cout << "Value of j in Obj1 : "<<obj1.j<< "\n";   // Instance Variable   //11
    cout << "Value of j in Obj2 : "<<obj2.j<< "\n";                          //21

    cout << "Value of i in Obj3 : " << obj3.i << "\n";
    cout << "Value of j in Obj3 : " << obj3.i << "\n";

    cout << "Inside Main :- \n";

    obj1.fun();   //fun(obj1)

    cout << "Inside Main :- \n";

    obj2.fun();

    obj1.gun();  //Demo::gun()

    return 0;
}

//Size of object is summation of Sizes of it's non-static characteristics.
//sizeof(obj)= sizeof(i) + sizeof(j) = 4 + 4 = 8 Byte
