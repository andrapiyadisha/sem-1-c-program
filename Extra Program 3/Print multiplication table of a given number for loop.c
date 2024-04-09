#include<stdio.h>
void main(){
	int i,n,sum;
	printf("value: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		sum=sum*i;
	}
	printf("%d",sum);
}
