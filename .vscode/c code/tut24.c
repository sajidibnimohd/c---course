#include <stdio.h>
int main() 
{
    /*  int marks[4]={4,5,51,66};
    printf("marks of stduent 3 is %d\n", marks[1]);
    printf("marks of studenrt 2is %d",marks[2]);
    return 0;*/
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
   {
        printf(" the value of %d element of the array is %d\n",marks[i]);
        
          }
    return 0;
}
