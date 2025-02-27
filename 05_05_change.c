#include <stdio.h>

void change(int a);
int main()
{
    int b = 344;
    printf("The value of change function is before b is %d\n", b);
    printf("The value of change function is after b is %d\n", b);
    return 0;
}
void change(int a)
{
    a = 77;
}