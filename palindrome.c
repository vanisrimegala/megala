#include<stdio.h>
void main()
{
int n,r,k;
printf("Enter the no");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
r=n%10;
k=r;
printf("%d",k);
}
if(k==n)
{
printf("palindrome");
else
printf("not");
}
}
