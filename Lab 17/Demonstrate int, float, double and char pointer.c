#include<stdio.h>
void main(){
	int num=5;
	float f=2.14;
	double d=2.2345;
	char c='A';
	
	int*intptr=&num;
	float*floatptr=&f;
	double*doubleptr=&d;
	char*charptr=&c;
	
	printf("%d\n",*intptr);
	printf("%d\n",intptr);
	printf("%2f\n",*floatptr);
	printf("%4lf\n",*doubleptr);
	printf("%c\n",*charptr);
}
