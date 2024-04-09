#include<stdio.h>
void main(){
	int n,reverse=0,original,remainder;
	printf("enter a number :");
	scanf("%d",&n);
	original=n;
	while(n!=0){
		remainder=n%10;
		reverse=reverse*10+remainder;
		n/=10;
	}
	if(original==reverse)
	printf("Number is pellindron");
	else
	printf("not pellindron");
}
