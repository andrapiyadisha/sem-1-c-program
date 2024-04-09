#include<stdio.h>
void main(){
	int i,a[5]={2,-7,-4,-8,9},count=0;
	for(i=0;i<5;i++){
		if(a[i]<0){
			count++;
		}
	}
	printf("neg=%d",count);
}
