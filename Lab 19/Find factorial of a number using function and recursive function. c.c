#include<stdio.h>
void main(){
	int n=5;
	int res=fact(n);
	printf("%d",res);
}
int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
