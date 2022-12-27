#include<stdio.h>

//typedef Old_Name      New_Name
// typedef JUNA_NAW    NAWIN_NAW

typedef int INTEGER;

typedef unsigned long int UNLOG;

struct Demo
{
    int a;
    int b;
};

typedef struct Demo DEMO;
typedef struct Demo *PDEMO;

int main()
{
    INTEGER i=10;           // int i =10;
    UNLOG j = 21;           //  unsigned long int j=12;
    DEMO obj;               //  struct Demo obj;
    PDEMO ptr = &obj;       //  struct Demo * ptr = &obj;

    return 0;
}
