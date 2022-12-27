#include<stdio.h>
int main()
{
    int Marks[4] = {10,20,30,40};      //Member initialisation Method

    int Me[4] = {1,2};        //Member initialisation Method__Due this we don't get garbage

    printf("%d\n",Marks[0]);  //10
    printf("%d\n",Marks[1]);  //20
    printf("%d\n",Marks[2]);  //30
    printf("%d\n",Marks[3]);  //40

    printf("%d\n",Me[0]);  //1
    printf("%d\n",Me[1]);  //2
    printf("%d\n",Me[2]);  //0     
    printf("%d\n",Me[3]);  //0

    return 0;
}