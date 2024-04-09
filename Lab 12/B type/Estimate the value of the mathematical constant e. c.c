#include<stdio.h>
void main(){
	float i,n,sum=0,f=1,e=1;
	printf("enter a value: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
	   	f=f*i;
	   	sum=sum+(1/f);
	   }
	   printf("%f",e+sum);
}
