#include<stdio.h>
main()
{
int year;
printf("the year is:");
scanf("%d",&year);
if((year%4)==0)
{
printf("%d is leapyear",year);
else
{
printf("%d is not year",year);
}
}
