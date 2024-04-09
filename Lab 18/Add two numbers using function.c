#include<stdio.h>
int add(int a,int b);
int main(){ 
int a,b,sum;
scanf("%d %d",&a,&b);
add(a,b);
printf("sum=%d",sum=a+b);}
int add(int a,int b){
	return(a+b);					
}

