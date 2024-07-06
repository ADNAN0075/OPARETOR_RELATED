#include<stdio.h>
int main()
{
    int intsize;
    float floatsize;
    double doublesize;
    char charsize;

    printf("Size of int in byte(s)=%d\n",sizeof(intsize));
    printf("Size of float in byte(s)=%d\n",sizeof(floatsize));
    printf("Size of double in byte(s)=%d\n",sizeof(doublesize));
    printf("Size of char in byte (s)=%d\n",sizeof(charsize));
    return 0;
}
