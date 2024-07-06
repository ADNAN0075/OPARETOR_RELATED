#include<stdio.h>
int main()
{
    float a,b,c,root1,root2;
    printf("Enter your number:");
    scanf("%f %f %f",&a,&b,&c);

    root1=(-b+ sqrt(pow(b,2)-4*a*c))/(2*a);
    root2=(-b- sqrt(pow(b,2)-4*a*c))/(2*a);

    if(root1<=0 || root1>=0)
    {
        printf("%.2f\t",root1);
    }
    else
    {
        printf("Imaginary\n");
    }
    if(root2<=0 || root2>=0)
    {
        printf("%.2f\n",root2);
    }
    else
    {
        printf("Imaginary");
    }

    return 0;
}
