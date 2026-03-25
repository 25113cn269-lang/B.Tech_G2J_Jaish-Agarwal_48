#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],r1,c1,r2,c2,i,j;
    printf("Enter the row and column of matrix 1=");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of matric 2=");
    scanf("%d%d",&r2,&c2);
    if(r1!=r2 && c1!=c2)
    {
        printf("Addition is not possible");
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("Enter a[%d]a[%d]",i,j);
                scanf("%d",& a[i][j]);

        }
    }
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
            }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d \t",c[i][j]);
        }
    }
    return 0;
}
}