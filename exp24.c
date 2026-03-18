#include <stdio.h>
int main()
{
int a[50],n,i,max,min;
printf("Enter no of elements");
scanf("%d",&n);
max=a[0];
min=a[0];
for (i=1;i<n;i++)
{
   if (a[i]>max)
   {
      max=a[i];
   }
   if (a[i]<min)
   {
      min=a[i];
   }
}
printf("Maximum value=%d,max");
printf("Minimum value=%d",min);
return 0;
}
