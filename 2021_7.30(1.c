#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	int arr[50] = { 0 };
	int i = 0;
	while (x)
	{
		arr[i] = x % 6;
		x = x / 6;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}