
// Storage Class:- static

// as Local variable

#include<stdio.h>

void Demo()
{
    auto int A=10;        //__auto___Storage Class

    A++;                                         //Increment the value by 1______(10-->11)

    printf("Value from Demo is :- %d\n", A);

}

void Hello()
{
    static int B=10;                        //___static__Storage Class
    
    B++;                                 //Increment the value by 1______(10-->11)

                                         
    printf("___Value from Hello is :- %d\n", B);
}

int main()
{
    Demo();        //__for_auto_storage class_value is not going to preserve when we call it again
    Demo();    
    Demo();
    
    Hello();      //_for_static_storage class_value is going to preserve when we call it again
    Hello();   
    Hello();
    
    return 0;
}