#include<stdio.h>
void main(){
	int i,n,f=1;
	printf("enter a nimber: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("\n factorial of given number is %d",f);
}
