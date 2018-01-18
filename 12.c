#include<stdio.h>
int main()
{
int n,r;
printf("Enter an integer");
scanf("%d",&n);
while(n!=0)
{
n=n%10;
r=(r*10)+n;
n=n/10;
}
