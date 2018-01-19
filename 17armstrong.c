#include<stdio.h>
int main()
{
int n,r,result=0;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
result=result+r*r*r;
n=n/10;
}
if(result==n)
{
printf("%d is armstrong",n);
else
printf("not");
}
return 0;
}
