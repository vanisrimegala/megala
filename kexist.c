#include<stdio.h>
int main()
{
int n,k,i;
int a[5]={1,2,3,4,5};
printf("Enter 2 numbers");
scanf("%d%d",&n,&k);
for(i=0;i<=5;i++)
{
if(k==a[i])
printf("yes %d is present");
else
printf("no");
}
return 0;
}
