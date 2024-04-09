#include<stdio.h>
void main(){
	int a[5]={173,177,120,160,150},b[5]={50,42,55,70,51};
	int i,counth=0,countw=0;
	for(i=0;i<5;i++){
		if(a[i]>170){
			counth++;
		}
	}
	for(i=0;i<5;i++){
		if(b[i]<50){
			countw++;
		}
	}
	printf("height=%d\n",counth);
	printf("weight=%d",countw);
}
