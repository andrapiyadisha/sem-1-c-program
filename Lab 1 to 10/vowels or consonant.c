#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character :");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("%c is vowels ");
	}
	else
	{
		printf("%c is consonant");
	}
}
