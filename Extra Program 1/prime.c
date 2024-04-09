#include<stdio.h>
void main(){
	int i=2,n,flag=2;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==2)
	printf("prime number");
	else
	printf("not prime");
}
