#include<stdio.h>
void main(){
	int i,x,y,power=1;
	printf("value: ");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++){
		power=power*x;
	}
	printf("%d",power);
}
