/*#include <stdio.h>
int main()
{
    int marks[2][4] = {{23, 24, 45, 63}, {65, 78, 14, 99}};
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 4; j++)
                printf("the value of element 2 is %d,%d\n", i, j, marks[i][j]);
        }
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int marks[2][4] = {{45, 67, 98, 63}, {77, 54, 34, 69}};
    
        for (int i = 0; i < 2; i++)
            
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%d\n",marks[i] [j]);
              //  printf("the value of %d,%d element of the array   is %d\n", i, j, marks[i]);//
            }
            printf("\n");
        }
        // printf("the vale of 2 is %d\n",marks[2]);
        return 0;
    }