 #include<stdio.h>
 void main()
 {
 	int number;
 	printf("enter a number :");
 	scanf("%d",&number);
 	if(number&1)
	 {
	 	printf("%d is odd",number);
	 }
	 else
	 {
	 	printf("%d is even",number);
	 }
 }
