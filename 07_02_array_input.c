#include <stdio.h>

int main()
{

    int marks[4];

    printf("Enter the value of marks for student 1 : ");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks for student 2 : ");
    scanf("%d", &marks[1]);
    printf("Enter the value of marks for student 3 : ");
    scanf("%d", &marks[2]);
    printf("Enter the value of marks for student 4 : ");
    scanf("%d", &marks[3]);
    // printf("Enter the value of marks for student 5 : ");  if we want to add some additional data forst  increase the value of inter ....
    // scanf("%d", &marks[4]);

    printf("I have entered %d %d %d amd %d", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}