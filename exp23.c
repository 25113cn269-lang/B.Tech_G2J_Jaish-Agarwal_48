#include<stdio.h>
int main()
{
int a[50],b[50],c[50],n;
printf("Enter size:");
scanf("%d",&n);
for(int i=0;i<=n-1;i++)
{
    printf("a[%d]=",i);
    scanf("%d",&a[i]);

}
for (int i=0;i<=n-1;i++)
{
    printf("b[%d]=",i);
    scanf("%d",&b[i]);

}
for (int i=0;i<=n-1;i++)
{
    c[i]=a[i]+b[i];
}
for (int i=0;i<=n-1;i++)
{
    printf("%d\t",c[i]);
}
return 0;
}

