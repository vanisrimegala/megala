#include<stdio.h>
int main()
{
int n,rem,rev=0;
printf("Enter an integer");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev=rev*10+n;
n=n/10;
}
if(rev==n)
{
printf("%d is palindrome",n);
else
printf("not");
}
return 0;
}
