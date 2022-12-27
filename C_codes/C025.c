//Fuction_pointer____->functionptr.c

#include<stdio.h>

//Function Definations
void Fun()
{
    printf("HEllo Void\n");
}

void Fun2()
{
    printf("HEllo Void_2\n");
}

int main()
{
   
    void (*fptr) ();
    //By Initialised Pointer
    //fptr is a pointer
    //Points to the function
    //that functions accept nothing
    //and that function returns nothing

    fptr = Fun;     //__Define
    fptr();         //Call Function

    Fun2();     //Call Function

    return 0;

}

//Code Continue:---

// int Addition(int nol, int no2)
// {
//     int ans = 0:
//     ans = nol+no2;
//     return ans;
// }

// int Addition(int nol, int no2)

// int (*fptr) (int, int) ;
// fptr = Addition:

// ret = Addition(10,11) ;

// ret = fptr(10,11);



//code continue:- 



// int main()

// int ret = 0;
// Fun () ;
// // Function call
// void (*fptr)();
// fptr = Fun;
// fptr();
// int (*fptr1) (int, int);
// fptr1 = Addition;
// ret = Addition (10,11) ;
// printf ("Addition is : %d\n", ret);
// ret = fptr (10,11) ;
// printf ("Addition is : %d\n", ret);
// return 0;