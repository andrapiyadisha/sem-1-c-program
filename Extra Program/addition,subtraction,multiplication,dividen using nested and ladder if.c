#include<stdio.h>
void main()
{
	int a,b,choice;
	
	printf("enter a two number :");
	scanf("%d %d",&a,&b);
	
	printf("choose an opretor :");
    scanf("%d",&choice);
	if(choice==1)
	{
		printf("addition:%d",a+b);
	}
	else
	if(choice==2)
	{
		printf("suntraction:%d",a-b);
	}
	else
	if(choice==3)
	{
		printf("multiplication:%d",a*b);
	}
	else
	if(choice==4)
	{
		printf("division:%d",a/b);
	}
}
