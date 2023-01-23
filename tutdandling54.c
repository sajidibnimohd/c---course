#include<stdio.h>
#include<stdlib.h>

int* functionDangling ()
{
    int a, b, sum;
    a=34;
    b=364;
    sum =a+b;
    return &sum;
}


int main ()
{
    //case 1: deallocation of a memory block
    int *ptr=(int*) malloc(7* sizeof(int));
    ptr[0]=34;
    ptr[1]=36;
    ptr[2]=64;
    ptr[3]=55;
    free(ptr); //ptr is now a dandling pointer 

    //case 2: function returning local varible address
    int* dangptr=functionDangling();//dangptr is now a dandling pointer 

    int * danglingptr3;
    //case 3: if a variable goes out of scope 

    {
        int a=12;
        danglingptr3=&a;
    }

    //here variable a goes out of scope , which means means danglingptr3 is pointing to a location which is freed and hence danglingptr3 is now a dangling pointer 
    return 0;
}


