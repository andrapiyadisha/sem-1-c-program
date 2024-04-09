#include<stdio.h>
void main()
{
	int n,digit,reverse=0;
	printf("enter number :");
	scanf("%d",&n);
	while(n>0){
	digit=n%10;
	reverse=reverse*10+digit;
	n/=10;	
	}
	while(reverse>0)
	{
		digit=reverse%10;
		reverse/=10;
		printf("%d, ",digit);
	}

}
