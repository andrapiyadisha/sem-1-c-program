#include<stdio.h>
void main(){
	int var,*ptr;
	var=2023;
	ptr=&var;
	printf("value of var=%d\n",var);
	printf("value avalable at *ptr=%d",*ptr);
}
