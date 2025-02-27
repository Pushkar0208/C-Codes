#include <stdio.h>
void printArray(int *ptr, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("The value of Element %d is %d\n", i + 1, *(ptr + i));
        
    }
}
int main()
{

    int arr[] = {133, 342 , 567, 874, 789, 456, 124};
    printArray(arr , 7);

        return 0;
}
