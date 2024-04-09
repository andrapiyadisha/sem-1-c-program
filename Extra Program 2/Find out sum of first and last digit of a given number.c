#include<stdio.h>
void main()
{
	int n,sum=0,ld,fd;
	printf("enter a value :");
	scanf("%d",&n);
	
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;
	printf("%d",sum);
}
