#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter an element into a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			printf("enter an element into b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
	}
	}
	for(i=0;i<2;i++){
	    for(j=0;j<2;j++){
	    	c[i][j]=a[i][j]*b[i][j]+a[i][j]*b[i++][j];
	    	printf("%d\t",c[i][j]);}
	    printf("/n");	
		}
	
}
