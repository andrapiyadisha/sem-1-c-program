#include<stdio.h>
void main()
{
	int a[3][3],i,j,pos=0,neg=0,zero=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter an element into a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	if(a[i][j]>0){
		pos++;
	}
	else if(a[i][j]<0){
		neg++;
	}
	else{
		zero++;}}}
		
		printf("positive element: %d\n",pos);
		printf("zero element: %d\n",zero);
	    printf("negative element: %d",neg);
}
