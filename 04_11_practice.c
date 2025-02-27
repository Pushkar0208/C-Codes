#include <stdio.h>

int main()
{

    int i, sum = 0, n = 100;

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("The value of sum is %d\n", sum);
    return 0;
}