#include<stdio.h>

//____Constant_&_Variable_____

int main()
{
    int No1=10;
    const int No2=10;

    int Arr[3]={10,20,30};
    const int Brr[3]={10,20,30};

    printf("No1: %d\n",No1);
    printf("No2: %d\n",No2);

    No1++;   //A
    No2++;   //NA

    N01=20;  //A
    No2=20;  //NA

    No1--;   //A
    No2--;   //NA


    return 0;
}