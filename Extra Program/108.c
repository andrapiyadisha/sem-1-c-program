#include<stdio.h>
 void main()
 {
	int i,j;
	//row
	
	for(i=1;i<=5;i++)
	{
		//space
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		//value
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");	
	}
}
