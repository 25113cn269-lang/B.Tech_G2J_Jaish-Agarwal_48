#include<stdio.h>
int main()
{
    int a;
    printf("enter number 1=");
    scanf("%d",&a);

if(a%2==0)
{
    printf("even %a",a);
}
else{
    printf("odd %d",a);
}
return 0;
}