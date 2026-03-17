#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number 1=");
    scanf("%d",&a);
    printf("Enter Number 2=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n After swapping");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}