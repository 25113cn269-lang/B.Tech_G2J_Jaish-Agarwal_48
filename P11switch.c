#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter two operands");
    scanf("%d%d",&a,&b);
    printf("enter an operator (+,-,*,/)");
    scanf(" %c",&op);
    switch(op)
    {
        case'+':
        printf("addition=%d",a+b);
        break;
         case'-':
        printf("subtraction=%d",a-b);
        break;
        case'*':
        printf("multiplication=%d",a*b);
        break;
        case'/':
        if(b<=0)
        printf("division can't be performed");
        else
        printf("division=%f",(float)a/b);
        default:
        printf("Error! incorrect operator");
    }

    return 0;
}