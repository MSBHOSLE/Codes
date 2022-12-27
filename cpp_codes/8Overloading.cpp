#include <iostream>
using namespace std;

class Overloading
{
    public:
        // Add@2ii     _____Name Mangling
        int Add(int a, int b)  //1000
        {
            cout<<"Addition of 2 int\n";
            return a+b;
        }

        // Add@2ff
        float Add(float a, float b)  //2000
        {
            cout<<"Addition of 2 float\n";
            return a + b;
        }

        // Add@2dd
        double Add(double a, double b)  //3000
        {
            cout<<"Addition of 2 double\n";
            return a + b;
        }

        // Add@3iii
        int Add(int a, int b, int c)  //4000
        {
            cout<<"Addition of 3 int\n";
            return a + b + c;
        }

        // Fun@2if
        void Fun(int a, float b)  //5000
        {}

        // Fun@2fi
        void Fun(float x, int y) //6000
        {}
};

int main()
{
    Overloading obj;

    obj.Add(11,10);          // CALL 1000
    obj.Add(10,10,11);       //CALL 4000
    obj.Add(10.8, 80.5);     //CALL 3000
    obj.Add(10.8f, 80.5f);   //CALL 2000

    //For Output and Proper Study

    int i;
    float f;
    double d;

    i = obj.Add(11, 10);       // CALL 1000
    cout<<i<<"\n";

    i = obj.Add(10, 10, 11);   // CALL 4000
    cout << i << "\n";

    d = obj.Add(10.8, 80.5);   // CALL 3000
    cout << i << "\n";

    f = obj.Add(10.8f, 80.5f); // CALL 2000
    cout << i << "\n";
    

    return 0;
}

/*
sizeof('A')=1 byte
sizeof(11)= 4 byte
sizeof(80.99)= 8 byte
sizeof(80.99f)= 4byte

int i=10;
printf("%d",i);             //10
printf("%d",sizeof(++i));   //4
printf("%d",i);             //10

*/