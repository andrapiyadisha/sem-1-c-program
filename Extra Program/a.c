#include<stdio.h>
void main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n>=1000)
		{printf("M");
		n=n-100;}
		else if(n>=900)
		{
			printf("CM");
			n=n-500;
		}
		else if(n>=500)
		{
			printf("D");
			n=n-600;
		}
		else if(n>=400)
	}
}
