#include<stdio.h>
int main()
{
int a[5],i,temp;
printf("the array elements are \n");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
while(a[i]!=0)
{
temp=a[i];
if(a[i]>a[i+1])
{
a[i]=a[i+1];
}
else
{
i++;
}
}
return 0;
}
