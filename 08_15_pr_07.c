#include <stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        *ptr++;
    }
}
int main()
{

    char c[] = " This is my room";
    decrypt(c);
    printf("the decrypted string is: %s ", c);
    return 0;
}