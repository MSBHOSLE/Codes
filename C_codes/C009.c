
// Functions___________(Multiplication)


#include<stdio.h>

int Multiplication(int iNo1,int iNo2)

{
    int Ans=0;
	Ans=iNo1 * iNo2;
	return Ans;
}

int main()         // Main:- Means entry point function_from where program start execution

{
	auto int A=10;
	register int B=11;
	auto int Gunakar=0;

	printf("Inside the main function\n");

	Gunakar=Multiplication(A,B);
	printf("Multiplication is:- %d\n", Gunakar);

	return 0;
}
