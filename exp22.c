int main()
{
    int a[50],n,i,sum=0;
    printf("Enter the number of elements");
    scanf("%d",&n);
for (i=0;i<n;i++)
{
        printf("Enter a[%d]:\n",i);
    scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
    sum=sum+a[i];
}
printf("Sum of the array=%d\n",sum);
return 0;


}

