#include<stdio.h>
void main(){
	int i,a[2]={1,2},b[2]={3,4};
	for(i=2;i<2;i++){
		b[i]=a[i];
	}
	for(i=0;i<2;i++){
		printf("element in b[%d]:%d\n",i,a[i]);
	}
}
