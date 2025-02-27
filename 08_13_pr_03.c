#include <stdio.h>
void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m+i) < n)
    {
        st[i] = st[i + m];
        i++;
    }
    st[i]='\0';
}
int main()
{
 
    char st[] = "gaurav";
    slice(st, 1, 6);
    printf("%S", st);
    return 0;
}