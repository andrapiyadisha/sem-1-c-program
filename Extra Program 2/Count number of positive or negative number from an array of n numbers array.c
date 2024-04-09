#include<stdio.h>
void main(){
	int a[5]={10,-7,0,0,0};
	int i,sum=0,poscount=0,negcount=0,zerocount=0;
	for(i=0;i<5;i++){
		if(a[i]>0){
			poscount++;
		}else if(a[i]<0){
			negcount++;
		}else{
			zerocount++;
		}
	}
	printf("poscount=%d\n",poscount);
	printf("negcount=%d\n",negcount);
	printf("zerocount=%d\n",zerocount);
}
