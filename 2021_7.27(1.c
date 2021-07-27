#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Sort(int p[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (p[j] > p[j + 1])
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,6,5,9,7,8,4,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}