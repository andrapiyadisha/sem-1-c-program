#include<stdio.h>
void print(int a1,int b2){
	printf("%d\n",a1);
	printf("%d\n",b2);
}
int main(){
	int aArray[]={2,2,4,12};
	print(aArray[1],aArray[2]);
	return 0;
}
