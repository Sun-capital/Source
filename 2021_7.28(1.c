#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Sort(int* arr, int sz)
{
	int i = 0;
	
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = 0;
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
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
	int arr[] = { 1,10,9,4,3,2,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	Sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}