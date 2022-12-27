//void.c
//___

#include<stdio.h>
int main()
{
    char ch = 'A';
    int i = 11;
    float f =9.09;
    double d = 89.9078;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("Value of ch:- %c\n", ch);       //A
    printf("Address of ch:- %p\n", &ch);    //100

    printf("Value inside cp:- %p\n", cp);   //100
    printf("Data refer by cp:- %c\n", *cp); //A

    printf("Sizeof ch:- %d\n", sizeof(ch));   //1byte
    printf("Sizeof cp:- %d\n", sizeof(cp));   //8byte

    
    return 0;
}