#include<stdio.h>
int main()
{
    int a[50][50],n,i,j;
    printf("Enter of the matrix");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        printf("%d",a[j][i]);
    }
    printf("\n");
return 0;
}