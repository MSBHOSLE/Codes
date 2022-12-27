#include<stdio.h>

//__Array-Pointer_____(link b/w array pointer)

int main()
{
    int Arr[4] = {10,20,30,40};

    int *p = &(Arr[0]);

    int *q = &(Arr[3]);

    printf("Arr[0]:- %d\n", Arr[0]);
    printf("*p:- %d\n", *p);
    printf("Arr[3]:- %d\n", Arr[3]);
    printf("*q:- %d\n", *q);
    printf("p:- %d\n", p);
    printf("q:- %d\n", q);
    printf("sizeof-p:- %d\n", sizeof(p));
    printf("sizeof-q:- %d\n", sizeof(q));
    printf("sizeof *p:- %d\n", sizeof(*p));
    printf("sizeof *q:- %d\n", sizeof(*p));
    printf("Address-p:- %d\n", &p);
    printf("Address-q:- %d\n", &q);
    printf("Address-*p:- %d\n", &*p);
    printf("Address-*q:- %d\n", &*q);



    return 0;
}