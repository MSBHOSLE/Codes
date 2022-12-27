//sequence.c____
#include<stdio.h>  //____for printf & scanf

//Shop
int Addition(int No1, int No2)
{
    int iAns=0;
    iAns = No1 + No2;
    return iAns;
}

// int Multi(int No1, int No2)
// {
//     int iAns = 0;
//     iAns = No1 * No2;
//     return iAns;
// }

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d", &iValue2);

    iRet=Addition(iValue1, iValue2);
    
    printf("Addition is:- %d\n",iRet);

    return 0;
}
