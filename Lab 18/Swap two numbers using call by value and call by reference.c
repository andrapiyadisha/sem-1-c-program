#include<stdio.h>
swap(int*,int*);
void main(){
	int a,b;
	printf("\n enter value of a&b: ");
	scanf("%d %d",&a,&b);
	printf("\nbefore swaping:\n");
	printf("\na=%d\n\nb=%d\n",a,b);
	swap(&a,&b);
	printf("\nafter swaping:\n");
	printf("\na=%d\n\nb=%d",a,b);
	return 0;
}
swap(int*x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
