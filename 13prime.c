#include<stdio.h>
int main()
{
int num,i;
printf("Enter the number");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
  break;
}
}
  if(i>num/2)
printf("%d is prime",num);
else
printf("%d is not prime",num);
return 0;
}
