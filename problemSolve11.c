#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b,c;
    printf("Enter your number :");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)<=80 && c>=0)
    {
        printf("1):%d\n",true);
    }
    else
    {
        printf("1):%d\n",false);
    }
    if((a-b)== 0 || c!=0)
    {
        printf("2):%d\n",true);
    }
    else
    {
        printf("2):%d\n",false);
    }
    if(a!=b || !(b<c) && c>0)
    {
        printf("3):%d\n",true);
    }
    else
    {
        printf("3):%d\n",false);
    }
    return 0;
}
