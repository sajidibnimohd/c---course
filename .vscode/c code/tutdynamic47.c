#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*use of malloc
    int *ptr;
    int n;
    printf("enter the size of array you want the create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]); //value at ptr+y//dinamically write here
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }*/
      //use of calloc
   int *ptr;
    int n;
    printf("Enter the size of array you want the create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]); //value at ptr+y//dinamically write here
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
//use of reallov
    
    printf("enter the size of the new  array you want the create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]); //value at ptr+y//dinamically write here
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
free(ptr);
    return 0;
}