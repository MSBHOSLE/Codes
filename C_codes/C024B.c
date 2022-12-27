int main()
{
char ch = 'A';
int i = 11;
float f = 9.09;
double d = 89.9078;
char *cp = &ch;
int *ip = &i;
float *fp = &f;
double *dp = &d;
ch
void *vp = &ch;
100
printf("Value of ch : sc\n", ch); //A
printf("Address of ch : sp\n", &ch); //100
printf("Value inside cp : %p\n", cp); //100
printf("Data refer by cp : %c\n",*cp) ; //A
printf("Size of ch : %d\n", sizeof (ch) ) : //1
printf("Size of cp : %din", sizeof(cp)); //8

printf("Data refer by vp : %c\n",*(char *)vp);
Vp = &i:
printf("Data refer by vp : %d\n",*(int*) vp);
return 0;

}