#include<stdio.h>
void main()
{
	int n,sum,avg,count=0;
	
	while(1){
	scanf("%d",&n);
	if(n==0){
		break;
	}
	sum=sum+n;
	count++;
	
}
    avg=sum/count;
    printf("sum=%d, avg=%d",sum, avg);

}
