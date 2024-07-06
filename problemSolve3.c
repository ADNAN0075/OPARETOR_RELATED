#include<stdio.h>
int main()
{
    float a,b,X;

    printf("Enter your first number:");
    scanf("%f",&a);
    printf("Enter your last number:");
    scanf("%f",&b);


    X=(3.31 * (a*a) + 2.01 * (b*b*b))/(7.16 * (b*b) + 2.01 * (a*a*a));

    printf("X= %f",X);
    return 0;
}
