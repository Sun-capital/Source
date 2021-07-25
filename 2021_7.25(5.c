#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fibonacci1(n)
{
	int n1 = 1, n2 = 1;
	int i = 0;
	int n3 = 0;
	for (i = 1; i < n-1; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return n3;
}
int Fibonacci2(n)
{
	
	if (n > 2)
	{
		return Fibonacci2(n - 1) + Fibonacci2(n - 2);
	}
	else
		return 1;

}
int main()
{
	int n;
	scanf("%d", &n);
	int ret1 = Fibonacci1(n);
	int ret2=  Fibonacci2(n);
	printf("%d %d", ret1, ret2);
	
}