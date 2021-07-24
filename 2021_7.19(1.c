#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void merge(int* nums1, int numsSize, int m, int* nums2, int num2Size, int n)
{
	int end1 = m - 1;
	int end2 = n - 1;
	int end = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] > nums2[end2])
		{
			nums1[end] = nums1[end1];
			--end;
			--end1;
		}
		else
		{
			nums1[end] = nums2[end2];
			--end;
			--end2;
		}
	}
	while (end2 >= 0)
	{
		nums1[end] = nums2[end2];
		--end;
		--end2;
	}
}
int main()
{
	int arr1[] = { 1,2,2 };
	int arr2[] = { 2,3,4 };

	
	return 0;
}