#include<stdio.h>
void main()
{
	int i=1,n;
	printf("enter a number :");
	scanf("%d",&n);
	do
	{
		if(i%2==1)
		printf("%d",i);
		i++;
	}while(i<=n);
}
