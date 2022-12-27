#include<stdio.h>

//___Pointer__in C & C++____

int main()

{
    int No1=11;
    

    int *p = &No1;  //_* is a word of pointer_
    int **q = &p;
    int ***r = &q;
    int ****s = &r;

    printf("%d\n", No1);     //11
    
    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", r);
    printf("%d\n", s);

    printf("%d\n", &No1);
    printf("%d\n", &p); 
    printf("%d\n", &q);
    printf("%d\n", &r);
    printf("%d\n", &s);

    printf("%d\n", *p);  //_No=*p=11_
    printf("%d\n", **q);  //11
    printf("%d\n", ***r);   //11
    printf("%d\n", **s);  //_________for * as step__
    printf("%d\n", ****s);  //11


    return 0;
}

