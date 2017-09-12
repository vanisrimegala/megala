#include<stdio.h>
main()
{
char c;
printf("Enter the character:");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf(""%c is alphabet",c);
}
else
{
printf("%c is not an alphabet",c);
}
}
