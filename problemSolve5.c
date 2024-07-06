#include <stdio.h>

int main(){
    int X, Y;
    printf("Enter your X number:");
    scanf("%d",&X);
    printf("Enter your Y number:");
    scanf("%d",&Y);

    X += Y;
    Y -= X;
    printf("Incremented Value:%d\n",X);
    printf("Decremented Value:%d\n",Y);

    return 0;
}
