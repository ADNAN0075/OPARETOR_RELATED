#include<stdio.h>
#include<math.h>

int main()
{
    float x,Y;
    printf("Enter your number :");
    scanf("%f",&x);


    Y = 2*pow(cos(x),2)-sqrt(3)*sin(x) + log(x/2) ;

    printf("Ans :%f",Y);
    return 0;
}
