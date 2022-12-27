//___Selection1.c

#include<stdio.h>
#include<stdbool.h>   //It's not in c that's why they created Bool as a file for C

bool CheckEven(int iNo)   //Boolean data type-Bool
{
    if ((iNo % 2) ==0 )  //__ % = Remainder ____ / = Division ___
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet;

    printf("Enter One Number:- \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if (bRet==true)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is Odd number\n");
    }

    CheckEven(iValue);

    return 0;
}