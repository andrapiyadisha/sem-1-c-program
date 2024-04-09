#include<stdio.h>
void main()
{
	int m,h,s;
	
	printf("enter a seconds : ");
	scanf("%d",&s);
	
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s/60;
	
	printf("%d:%d:%d",h,m,s); 
}
