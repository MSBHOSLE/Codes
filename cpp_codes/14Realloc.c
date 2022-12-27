#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;
    //int *q = NULL;

    //void * realloc(void * ptr, int size)____Prototype
    p = (int*)malloc(10 * sizeof(int));

    //Use the Memory:-- total 40 Byte we can used

    p = (int*)realloc(p, 15 * sizeof(int));   //__p__,___15
    //q = (int*)realloc(p, 15 * sizeof(int));

    //use the Memory:--  Now 60 byte of memory we can used

    free(p);

    return 0;
}

