#include<stdio.h>
void main(){
	int a[5]={10,-7,0,3,0};
	int i,even=0,odd=0;
	for(i=0;i<5;i++){
		if(a[i]%2==0)
		even++;
		else
		odd++;}
		printf("even=%d\n",even);
		printf("odd=%d",odd);
		
	}
