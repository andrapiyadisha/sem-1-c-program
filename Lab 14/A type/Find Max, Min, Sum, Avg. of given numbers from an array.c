#include<stdio.h>
void main(){
	int a[5]={10,-7,0,7,0};
	int i,sum=0;
int	max=a[0];
int	min=a[0];
		for(i=0;i<5;i++){
		if(max<a[i]){
			max=a[i];
		}else
		min=a[i];
		}
		for(i=0;i<5;i++){
		sum=sum+a[i];}
		printf("max=%d\n",max);
		printf("min=%d\n",min);
		printf("sum=%d\n",sum);
		printf("avg=%d",sum/5);
		
	}
