#include <stdio.h>

int main()
{

    char ch;

    printf("Enter the character=\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("The number is lower case");
    }

    else
    {
        printf("The number is not lower case");
    }

    return 0;
}