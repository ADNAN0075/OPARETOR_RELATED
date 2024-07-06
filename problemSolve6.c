#include<stdio.h>
int main()
{
    int X, Y;
    printf("Enter your X value:");
    scanf("%d",&X);
    printf("Enter your Y value:");
    scanf("%d",&Y);

    X *= Y;
    X /= Y;
    printf("Multiplication:%d\n",X);
    printf("Division :%d\n",X);

    return 0;
}
