#include<stdio.h>
int main()
{
int num,num1,i;
printf("Enter the number");
scanf("%d%d",&num,&num1);
  for(i=num;i<=num1;i++)
  {
for(j=2;j<=i/2;i++)
{
if(i%j==0)
{
  break;
}
}
  }
  if(j>i/2)
printf("%d is prime",i);
else
printf("%d is not prime",i);
return 0;
}

   
