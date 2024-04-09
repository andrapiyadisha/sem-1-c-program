#include<stdio.h>
void main(){
	int n,first,last,org,new,x;
	printf("enter a number: ");
	scanf("%d",&n);
	org=n;
	last=n%10;
	while(n>=10){
		n/=10;
	}
	first=n;
	new=last;
	new*=10
//	org/=10;
//	org%=new+1;
//	new+=org;
	printf("%d\n",new+first);
}
