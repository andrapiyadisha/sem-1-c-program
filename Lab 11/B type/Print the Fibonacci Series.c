#include<stdio.h>
void main(){
	int i,n,first=0,second=1,next;
	printf("enter a number: ");
	scanf("%d",&n);
	printf("fibonacci series: ");
	for(i=2;i<=n;i++){
		next=first+second;
		printf("%d\n",next);
		first=second;
		second=next;
		
	}
}
