#include<stdio.h>
#include<string.h>
void main(){
	char str[100],c;
	int i,lenf=0,f;
	printf("enter a string: ");
	gets(str);
	lenf=strlen(str);
	printf("enter a character to find its position: ");
	scanf("%c",&c);
	for(i=0;i<=lenf;i++){
		if(str[i]==c){
			printf("character position:%d",i);
			f=1;
		}
	}
	if(f=0){
		printf("character not found");
	}
}
