#include <stdio.h>

float force(float mass);
int main()
{
    float m;

    printf("Enter the mass in Kg\n");
    scanf("%f", &m);
    printf("The value of force in newton is %.1f\n", force(m));

    return 0;
}
float force(float mass)
{

    float result = mass * 9.8;
    return result;
}
