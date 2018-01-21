int main()
{
int n,n1,r,result,i,temp;
printf("Enter the number \n");
scanf("%d%d",&n,&n1);
for(i=n+1;i<=n1;i++)
{
	result=0;
	temp=i;
while(temp!=0)
{
r=temp%10;
result=result+r*r*r;
temp=temp/10;
}
if(result==i)
{
	printf("%d armstrong",i);
}
}
return 0;
}
