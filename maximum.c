#include<stdio.h>
int main()
{
int n,a[10],i, max;
printf("Enter the numbers");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<=n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("The maximum element is %d",max);
return 0;
}