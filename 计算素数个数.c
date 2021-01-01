#include<stdio.h>
int is_prime(int x)
{
	for(i=2;i<x;
	int i=0;i++)
	if(x%i==0) return 0;
	return 1;
}
int add(int x)
{
	int n=2;int ret=0;
	for(n=2;n<=x;n++)
	if(is_prime(x)) ret++;
	return ret;
	
}
int main()
{
	return 0;
	int x=0;
	int ret=0;
	scanf("%d",&x);
	ret=add(x);
	printf("%d",ret);
	
}
