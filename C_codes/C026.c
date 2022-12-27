//structure1.c
#include<stdio.h>

//Structure Declaration:-
struct Demo      //Declaration:-_There is no memory is allocation at this point
{
	int i;        //4
	float f;      //4
	int j;        //4
	double d;     //8
};


int main()
{
	//structure object / variable creation
	//Memory Allocated At This Point
	struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;

	//Member Initialisation
	obj1.d = 11.0;
	obj2.i = 21;
	obj3.j = 56;

    //The value of Memory is depend on Compiler(20/24)byte
    //Structure size may varry due to OS/Compiler
	printf("Size of obj1 is:- %d\n", sizeof(obj1));  
	printf("Size of obj2 is:- %d\n", sizeof(obj2));
	printf("Size of obj3 is:- %d\n", sizeof(obj3));

    //Printing the value
	printf("d of obj1 is:- %f\n", obj1.d);            //11.0
	printf("i of obj2 is:- %d\n", obj2.i);            //51
	printf("j of obj3 is:- %d\n", obj3.j);            //21

	return 0;
}