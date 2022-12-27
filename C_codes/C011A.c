//__extern____storage class.......(as Global Variable)

//__using of extern storage Class__by using_C011A.c_C011B.c

//_command_1:- gcc C011A.c C011B.c (press return) ./a.out
//_command_2:- gcc C011A.c C011B.c -o Myexe (press return) ./Myexe

#include<stdio.h>

extern void Demo();         //Declaration of the function

extern int No1;     //_No1 is int defined external__to this file_(Same for No2, No3, No4)
extern int No2;
extern int No3;
extern int No4;

int main()
{
    Demo();                    //_Function Call

    printf("Value of No1:- %d\n", No1);
    printf("Value of No2:- %d\n", No2);
    printf("Value of No3:- %d\n", No3);
    printf("Value of No4:- %d\n", No4);


    return 0;
}