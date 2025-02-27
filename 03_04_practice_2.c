#include <stdio.h>

int main()
{

    int physics, math, chemistry ;
    float total;

    printf("enter your physics marks\n");
    scanf("%d", &physics);

    printf("enter your math marks\n");
    scanf("%d", &math);

    printf("enter your chemistry marks\n");
    scanf("%d", &chemistry);

    total = (physics + math + chemistry) / 3;

    if ((total < 40) || physics < 33 || math < 33 || chemistry < 33)
    {
        printf("your total percentage is %f an you are failed\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are passed\n", total);
    }

    return 0;
}