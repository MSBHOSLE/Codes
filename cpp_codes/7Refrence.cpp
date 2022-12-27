#include<iostream>
using namespace std;

int main()
{
    int no=11;

    int &x = no;
    //_x is considered as reference 

    int *p = &no;
    //_p is a pointer which holds address of integer and currently it holds no,

    double d = 90.9;

    double &y = d;
    double &z = d;

    int &a = x;

    return 0;
}