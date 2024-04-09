#include<stdio.h>
void main()
{
	int a[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter an element into a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
