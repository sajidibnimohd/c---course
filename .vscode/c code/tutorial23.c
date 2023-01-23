
#include <stdio.h>
int main()
{
    int marks[2][4] = {{45, 234, 3, 2},
                       {3, 2, 3, 3}};
    // {

    //   printf("Enter the value of %d elemrnt of the array\n", i);
    //   scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
         //   printf("the value of %d,%d element of the array is %d\n", i,j, marks[i]
         printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    // marks[0]=34;

    // printf("marks of students 1 is %d\n",marks[0]);

    // marks[0]=456;
    //  printf("marks of stduent 1 is %d",marks[0]);

    return 0;
}