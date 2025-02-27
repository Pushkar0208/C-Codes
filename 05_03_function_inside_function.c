#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    GoodMorning();

    return 0;
}
void GoodMorning()
{
    printf("Good Morning Gaurav\n");
    GoodAfternoon();
}
void GoodAfternoon()
{
    printf("Good Afternoon Gaurav\n");
    GoodNight();
}
void GoodNight()
{
    printf("Good Night Gaurav\n");
}
