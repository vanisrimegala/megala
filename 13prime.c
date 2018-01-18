#include<stdio.h>
int main()
{
int num,i;
printf("Enter the number");
scanf("%d",&num);
for(i=2;i<=num;i++)
{
if(num%i==0)
printf(" not prime");
else
printf("%d is prime",num);
}
return 0;
}
