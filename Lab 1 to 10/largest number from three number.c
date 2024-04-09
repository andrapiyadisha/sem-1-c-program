#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("enter a number : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is greter",a);
		}
		else
		{
			printf("%d is greater",c);
		}
	}
	else
	{
	if(b>c)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
	
	}
}
