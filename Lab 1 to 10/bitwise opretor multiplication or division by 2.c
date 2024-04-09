#include<stdio.h>
void main()
{
	int a;
	printf("enter a number :");
	scanf("%d",&a);
	
	int multiplied=a<<1;
	printf("multiply:%d\n",multiplied);
	
	int divided=a>>1;
	printf("divided:%d\n",divided);
}

