#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[] = "welcome to bit...";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s", arr2);
	while (left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	return 0;
}