#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n[10] = { 0 };
	int* pn = &n;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(pn + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(pn + i));
	}
	
	return 0;
}