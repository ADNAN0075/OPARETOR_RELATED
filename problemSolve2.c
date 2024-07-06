#include<stdio.h>
#define Pi 3.14
int main()
{
    float radius,Area;
    printf("Enter your radius number :");
    scanf("%f",&radius);
    Area = 2 * Pi * radius;
    printf("Area: %.2f",Area);

    return 0;
}
