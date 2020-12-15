#define _CRT_SECURE_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 1,3,2,9,4,5,8 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	for (i = 0; i < sz; i++)
	{
		bubble_sort(arr,sz);
		printf("%d", arr[i]);
	}
	return 0;
}