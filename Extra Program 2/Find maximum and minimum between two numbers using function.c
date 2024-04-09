#include<stdio.h> 
int maxnum(int a,int b);
int main(){
	int a,b,max;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	max=maxnum(a,b);
	printf("max=%d",max);
	return 0;
}int maxnum(int a,int b){
	int max; 
    max=(a>b?a:b);
    return(max);
}
