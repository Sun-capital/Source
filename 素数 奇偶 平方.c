#include<stdio.h>
//判断素数 
int is_prime(int x)
{
	int i;
	for (i = 2; i < x; i++)
		if (x % i == 0)return 0;
	return 1;
}
//判断一个整数的奇偶性
int jo(int n)
{
	if(n%2==0)return 0;
	return 1;
 } 
 //1到n的累加和
 int add(int n)
 {
 	int i=0;int s=0;
 	for(i=1;i<=n;i++)
 	s+=i;
	 return s; 
  } 
  
  int ci(int x,int y)
  {
  	int i=0;int s=1;
  	for(i=1;i<=y;i++)
  	s*=x;
  	return s;
   } 
void work()
{
	int x = 0;int f=0;
	scanf("%d%d", &x,&f);
	if(is_prime(x))
	printf("Yes\n");
	else printf("No\n");
	if(jo(f)) printf("奇数\n");
	else printf("偶数\n"); 
	printf("%d\n",add(x));
	printf("%d\n",ci(x,f));
	
}

int main()
{
	int x;
	work();
	return 0;
}

