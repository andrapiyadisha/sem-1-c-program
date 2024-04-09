#include<stdio.h>
void main()
{
	int i=1,n,factorial=1;
	printf("value :");
	scanf("%d",&n);
	if(n==0)
	printf("1");
	else
	if(n>0)
	{
	
	while(n>=1)
	{
		factorial*=n;
		n--;
	}
}
	printf("%d",factorial);
	
}
