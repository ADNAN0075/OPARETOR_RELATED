#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your last number:");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("Max:%d",num1);
    }
    else
    {
        printf("Max:%d",num2);
    }
    return 0;
}
