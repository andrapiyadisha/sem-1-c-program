#include<stdio.h>
void main(){
	int i,a[5]={2,3,15,12,5},count=0;
	for(i=0;i<5;i++){
		if(a[i]%3==0){
			count++;
		}
		}
	printf("number=%d",count);
}
