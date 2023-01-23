#include <stdio.h>
int b = 34; //this is aglobal variable since it is declared inside main ()
int func1(int b)
{
    static int myvar = 0;
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    // printf("the value of b inside func1 is %d\n",b);
    //printf("the address of b inside func1 is %d\n ",&b);
    return b + myvar;
}
int main()
{
    int b = 344;
    // printf("the address of b inside func1 is %d\n ",&b);

    int val = func1(b);

    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("the value of func1 is %d", val);
    return 0;
}