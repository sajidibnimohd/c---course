#include<stdio.h>
#include<stdlib.h>
int main()
{

    int a=434;
    int*ptr;//this is a wildpointr
   //*ptr=34;
    ptr=&a;//ptr is no longer a wild pointer
    printf("the value of a is %d\n",*ptr);
    return 0;
}