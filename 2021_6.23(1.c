#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int seek = 7;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > seek)
		{

			left = 0;
			right = mid - 1;
		}
		if (arr[mid] < seek)
		{
			left = mid + 1;

		}
		if (arr[mid] == seek)
		{
			printf("找到了，下标为：%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
}