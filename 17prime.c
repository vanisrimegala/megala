#include<stdio.h>
int main()
{
int num,num1,i;
printf("Enter the number");
scanf("%d%d",&num,&num1);
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

   
