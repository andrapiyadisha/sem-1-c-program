#include<stdio.h>
int main()
{
	char ch;
	printf("enter an alphabets :");
	scanf("%c",&ch);
	(ch>='a'&&ch<='z')?printf("alphabets"):printf("number");
}
