#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[100];
	int n, x, i;
	int ret = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			ret++;
		}
		printf("%d", ret);
	}
	return 0;
}