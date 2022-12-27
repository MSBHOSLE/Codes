
//_____fnFunctions__________(Addition)

#include<stdio.h>

int Addition(int ivalue1, int ivalue2)         //Shop

{
    int iOutput = 0;
    
    iOutput = ivalue1 + ivalue2;               

    return iOutput;
}

int main()                                      //House
{
    int iNo1=10;
    int iNo2=11;
    int iAns=0;

    iAns=Addition(iNo1,iNo2);                  //Bag(iAns)

    printf("Addition is:- %d\n",iAns);

    return 0;
}