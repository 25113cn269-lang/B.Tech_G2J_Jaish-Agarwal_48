#include<stdio.h>
int main ()
{
    float r,C,A;
    printf("Enter the radius of circle=");
    scanf("%f",&r);
    float pi=3.14;
    C=2*pi*r;
    A=pi*r*r;
    printf("\n the area of circle=%f",A);
    printf("\n the circumference of circle=%f",C);
    return 0;
}