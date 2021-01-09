#include<stdio.h>

int main()
{
	int price=0;
	
	printf("请输入金额(元):");
	scanf("%d",&price);
	
	int change=100-price;
	
	printf("您好巩静雯，找您%d元另送一个孙嘉傲。\n",change);
	
	return 0;
  } 
