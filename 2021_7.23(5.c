#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int x)
{
	if (x < 10)
	{
		printf("%d ", x % 10);
	}
	else
	{
		print(x / 10);
		printf("%d ", x % 10);
	}
}

int main()
{
	int x = 0;
	int ret = 0;
	scanf("%d", &x);
	print(x);
	
	return 0;
}