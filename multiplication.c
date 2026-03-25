#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],r1,c1,r2,c2,i,j,k;
    printf("Enter rows and column of matrix 1");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and coulmn of matrix 2");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Matrix multiplication is not possible");
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("Enter a[%d][%d]",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r2;i++)
        {
            printf("Enter b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
printf("Matrix multiplication:\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        printf("%d\t",c[i][j]);
    }
printf("\n");}
}
return 0;
}