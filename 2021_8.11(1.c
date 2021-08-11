#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int x, y;
	int ret = 0;
	scanf("%d %d", &x, &y);
	int (*pf)(int, int)=Add;
	ret = pf(x, y);
	printf("%d", ret);
	return 0;
}