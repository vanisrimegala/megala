#include<stdio.h>
add(int,int);
int main()
{
int a[5],n,k,sum=0,i;
	printf("Enter the numbers");
	scanf("%d%d",&n,&k);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=k;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
	return 0;
}
