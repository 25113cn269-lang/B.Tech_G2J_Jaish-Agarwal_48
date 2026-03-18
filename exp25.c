#include<stdio.h>
int main ()
{

int a[50],n,i,key,loc=-1;
printf("Enter no of elements");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    printf("Enter a[%d]",i);
    scanf("%d",&a[i]);
}
printf("Enter searching element");
scanf("%d",key);
for (i=0;i<n;i++)
{
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            loc=i;
            printf("%d element is found at %d index",key,loc);
            break;

        }
    }
    if (loc==-1);
    printf("Element is not found");
}
return 0;
}