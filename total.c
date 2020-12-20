#include<stdio.h>
int main()
{
	int day=10;
	int n=1;
	while(day>1)
	{
		day=day-1;
		n=2*(n+1);
	}
	printf("桃子的总数：%d\n",n);
	return 0;
 } 
