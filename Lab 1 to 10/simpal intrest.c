#include<stdio.h>
void main()
{
	int p,r,t;
	printf("enter a principal : ");
	scanf("%d",&p);
	
	printf("enter a roi : ");
	scanf("%d",&r);
	
	printf("enter a time period : ");
	scanf("%d",&t);
	
	printf("%d",p*r*t/100);
}
