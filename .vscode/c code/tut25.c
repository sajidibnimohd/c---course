#include <stdio.h>
int main()
{
    int marks[2][4] = {{3, 4, 5, 6},
                       {55, 3, 4, 5}};
    {
        for (int i = 0; i < 2; i++)

        {
            for (int j = 0; j < 5; j++)

                printf("the value of %d,%d elements of the array is %d\n ", i, j, marks[i][j]);
        }
    }
    return 0;
}