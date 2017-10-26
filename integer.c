#include<stdio.h>
main()
{
int n,count=0;
printf("enter an integer");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("%d integre");
}
