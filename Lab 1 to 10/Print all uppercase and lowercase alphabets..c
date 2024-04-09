#include<stdio.h>
void main()
{  
	char uppercase ='A',lowercase ='a';
	while(lowercase<='z')
	{
		printf("%c",lowercase);
		lowercase++;
	}
	printf("\n");
	while(uppercase<='Z')
	{
		printf("%c",uppercase);
		uppercase++;
	}
}
