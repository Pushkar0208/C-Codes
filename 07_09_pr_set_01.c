#include <stdio.h>

int main()
{

    int arr[10];
   int *ptr = arr;
    ptr = ptr + 2;

    if (ptr == &arr[2])
    {
        printf("These values are in same location on the memory\n");
    }
    else
    {
        printf("These values are  not in same location on the memory\n");
    }

    ;
    return 0;
}