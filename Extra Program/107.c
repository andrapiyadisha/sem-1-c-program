#include<stdio.h>
 void main()
 {
	int i,j;
	//row
	
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||i==5||j==5)
			{
				printf("*");
			}
			else
			{
			    printf(" ");
		    }
		printf("\n");	
	}
}
