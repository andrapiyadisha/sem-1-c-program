#include<stdio.h>
void main(){
	int n,digit,count,i;
	int frequency[10]={0};
	printf("enter a number: ");
	scanf("%d",&n);
	
	
	while(n!=0){
		digit=n%10;
		frequency[digit]++;
		n/=10;
	    }
		
		printf("frequency of digit: ");
		for(i=1;i<10;i++){
			if(frequency[i]>0){
				printf("digit=%d : %d\n",i,frequency[i]);
			}
			
		}
		}

