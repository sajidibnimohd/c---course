#include <stdio.h>
int main()
{
    int marks[2][5] = {{2, 3, 5, 6, 7}, {5, 6, 4, 35, 7}};
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 5; j++)
            printf("the value of %d,%d  element of array is %d\n",i,j,marks[i][j]);
        }
    }
    return 0;
}