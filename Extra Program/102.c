 #include<stdio.h>
 void main()
 {
	int i,j,num=1;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d",num) ;
		}	
		num++;
		
		printf("\n");	
	}
} 
