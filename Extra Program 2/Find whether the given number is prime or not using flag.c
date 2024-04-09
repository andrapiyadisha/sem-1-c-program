#include<stdio.h>
void main(){
	int i=2,n,flag=2;
	printf("enter a valu: ");
	scanf("%d",&n);
	while(i<n/2){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==2)
	printf("prime number");
	else
	printf("not prime number");

}

