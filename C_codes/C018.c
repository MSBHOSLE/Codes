
//_____Array___

#include<stdio.h>

int main()

{
    int Me[2];         //Member by Initialisation_method can get Garbage
        
    Me[0]=10;
    Me[1]=20;

    printf("%d\n",Me[0]);  //1
    printf("%d\n",Me[1]);  //2
    printf("%d\n",Me[2]);  //___Get garbage
    printf("%d\n",Me[3]);  //_____Get the Garbage

    return 0;
}