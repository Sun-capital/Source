#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	int tmp = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > tmp)
		{
			tmp = arr[i];
		}
	}
	printf("%d", tmp);
	return 0;
}