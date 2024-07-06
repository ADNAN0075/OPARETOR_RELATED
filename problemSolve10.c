#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b,c;
    printf("Enter your number :");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)<=80)
    {
        printf("a):%d\n",true);
    }
    else
    {
        printf("a):%d\n",false);
    }
    if(!(a+b))
    {
        printf("b):%d\n",true);
    }
    else
    {
        printf("b):%d\n",false);
    }
    if(c!=0)
    {
        printf("c):%d\n",true);
    }
    else
    {
        printf("c):%d\n",false);
    }
    return 0;
}
