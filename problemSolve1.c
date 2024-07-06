#include<stdio.h>
int main()
{
    int X,Y;
    printf("Enter your first number:");
    scanf("%d",&X);
    printf("Enter your last number:");
    scanf("%d",&Y);

    printf("Addition:%d\n",X+Y);
    printf("Subtraction:%d\n",X-Y);
    printf("Multiplication:%d\n",X*Y);
    printf("Quotient:%d\n",X/Y);
    printf("Reminder:%d\n",X%Y);
    return 0;
}
