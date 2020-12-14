#include<stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d",&d);
	a=d/100;
	b=d/10%10;
	c=d%10;
	printf("%d",c*100+b*10+a);
	return 0;
	
 } 
