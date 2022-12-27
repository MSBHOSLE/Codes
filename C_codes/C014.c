
//____Size of Address Of_____

#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 3.14;
    double d = 9.567;

    printf("\nValue of the Variables are:- \n");
    printf("%c\n",ch);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n\n",d);

    printf("Size of the each Variable are:- \n");       //__Operator:- sizeof
    printf("size of the character : %d\n", sizeof(ch));
    printf("size of the integer : %d\n", sizeof(i));
    printf("size of the float : %d\n", sizeof(f));
    printf("size of the double : %d\n", sizeof(d));

    printf("\nAddress of the each Variable are:- \n");  //_Address is getting due to_(&)
    //Operator__:- &
    printf("Address of the character : %d\n", &ch);
    printf("Address of the integer : %d\n", &i);
    printf("Address of the float : %d\n", &f);
    printf("Address of the double : %d\n", &d);

    printf("Address of the character : %p\n", &ch);  //_value in Hexa

    return 0;

}