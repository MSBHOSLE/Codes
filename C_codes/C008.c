
// Local Global

#include<stdio.h>

int X=10;                                           //Global Variable

void Demo()
{
    int B=30;                                       //Local Variable
    printf("Value of B from Demo:- %d\n",B);
    printf("Value of X from Demo:- %d\n",X);

    //printf("%d",A);   //Not Allowed

}

int main()

{
    int A=20;                                        //Local Variable
    printf("Value of A from Demo:- %d\n",A);
    printf("Value of X from Demo:- %d\n",X);

    //printf("%d",B);   //Not Allowed

    Demo();   //Function Call                                   

    return 0;
}