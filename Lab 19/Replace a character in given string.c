#include<stdio.h>
void main(){
	int i;
	char s1[100],a,key;
	gets(s1);
	scanf("%c %c",&a,&key);
	for(i=0;i<100;i++){
		if(s1[i]==a){
			s1[i]=key;
		}
	}
	printf("%s",s1);
}

