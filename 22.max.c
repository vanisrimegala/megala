#include<stdio.h>
int main()
{
int n,a[5],i;
printf("Enter number");
scanf("%d",&n);
printf("array elements are");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
if(n>a[i])
printf("%d is max",n);
else
printf("not");
}
return 0;
}
