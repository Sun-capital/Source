#include<stdio.h>
//�ж����� 
int is_prime(int x)
{
	int i;
	for (i = 2; i < x; i++)
		if (x % i == 0)return 0;
	return 1;
}
//�ж�һ����������ż��
int jo(int n)
{
	if(n%2==0)return 0;
	return 1;
 } 
 //1��n���ۼӺ�
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
	if(jo(f)) printf("����\n");
	else printf("ż��\n"); 
	printf("%d\n",add(x));
	printf("%d\n",ci(x,f));
	
}

int main()
{
	int x;
	work();
	return 0;
}

