#include<stdio.h>
void main()
{
	int n,i=1,count=0;
	printf("enter value :");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0)
        {
		count++;}
		i=i+1;
		}
		if(count==2)
		printf("prime number");
		else
		printf("not prime");
		
}

