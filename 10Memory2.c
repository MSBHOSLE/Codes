#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=0;
    int *Arr= NULL;
    
    printf("Entre the size of Array\n");
    scanf("%d",&size);

    Arr=(int*)malloc(sizeof(int)*size);

    //Use Memory

    free(Arr);
    
    return 0;
}