#include<stdio.h>
int main()
{
int n1,n2,i;
printf("Enter the intervals \n");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
if(i%2==0)
{
printf("%d is even",i);
}
else
{
  printf("%d is odd",i);
}
}
return 0;
}
