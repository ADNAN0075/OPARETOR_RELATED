#include<stdio.h>
int main()
{
    int IntNumber,Int_Number;
    printf("Enter your integer number :");
    scanf("%d",&IntNumber);
    float FloatNumber,Float_Number;
    printf("Enter your floating number :");
    scanf("%f",&Float_Number);

    printf("Assignment: %f assigned to an int produces %d\n",Float_Number,Int_Number=Float_Number);
    printf("Assignment: %d assigned to a float produces %f\n",IntNumber,FloatNumber=IntNumber);

    float Cast_To_Float=(float)IntNumber;
    int Cast_To_Int=(int)Float_Number;
    printf("Type Casting:(float)%d produces %f\n",IntNumber,Cast_To_Float);
    printf("Type Casting:(int)%f produces %d\n",Float_Number,Cast_To_Int);

    return 0;
}
