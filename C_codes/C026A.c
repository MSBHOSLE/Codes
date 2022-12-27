//Way of inserting Objects
#include<stdio.h>


//1st WAY:-

struct numObj
{
	int i;
	int j;
	int k;
}Obj1,Obj2,Obj3;

int main()
{
	struct numObj Obj1;
	Obj1.i=18;
	printf("%d\n", Obj1.i );

	return 0;
}

//2nd WAY:-

struct floatObj
{
	float i;
	float j;
	float k;
};

int main()
{
	struct floatObj obj1;
    struct floatObj obj2;
    struct floatObj obj3;

    obj3.k=18.18;
    obj2.j=22.22;
    obj1.i=11.11;

    printf("%lf\n", obj2.j);


	return 0;
}