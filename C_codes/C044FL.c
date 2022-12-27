// Iteration4.c
// Creating Array

#include <stdio.h>

int main()
{
    int Arr[4] = {11, 21, 51, 101};

    int iCnt = 0;

    printf("Elements of an Array are:- \n");
    
    //Loop Body= printf("%d\n", Arr[_____]);


//        1         2          3
    for (iCnt=0 ; iCnt <=3 ; iCnt++) 
    {
        printf("%d\n", Arr[iCnt]);   //4
    }
    
    return 0;
}