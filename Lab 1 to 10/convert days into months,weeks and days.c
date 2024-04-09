#include<stdio.h>
void main()
{
    int m,w,d;
    
    printf("enter a days : ");
    scanf("%d",&d);
    
    m=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
    
    printf("%d %d %d",m,w,d);
}
