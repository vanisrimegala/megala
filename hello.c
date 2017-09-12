#include<stdio.h>
main()
{
char c;
int i,n;
printf("enter the no of times:");
scanf("%d",&n);
printf("the word is:");
scanf("%c",&c);
for(i=1;i<=5;i++)
{
printf("%d\t%s",i,c);
}
}
