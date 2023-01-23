#include<stdio.h>
int main()
{
    int a=34;
    int*ptra=&a;
    printf("%d\n",ptra++);
    printf("%d\n",ptra+2); 

    return 0;
}
/*#include<stdio.h>
int main ()
{
    int a=34;
    int *ptr=&a;
    printf("the address of pointer is %p\n",&a);
    printf("the value of a is %d\n",*ptr);
    return 0;
}*/
/*#include<stdio.h>
int main ()
{
    int marks[4]={3,5,6,8};
    printf("the marks of student 2 is %d\n",marks[2] );
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int marks[2][5] = {{45, 76, 95, 72, 56}, {56, 23, 91, 42, 89}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\n",marks[i][j]);
        }
        {
            printf("\n");
        }
    }
   // printf
   // printf("the marks of student 3", marks[3]);
    return 0;
}*/