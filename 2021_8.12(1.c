#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int Judge(char* arr1, char* arr2)
{
	assert((arr1 != NULL) && (arr2 != NULL));
	int right=strlen(arr2)-1;
	int left = 0;
	
	while (right>=0)
	{
		if (arr1[left] != arr2[right])
			return 0;
		left++;
		right--;

	}
	return 1;
	
	
}
int main()
{
	char arr1[] = "ABC";
	char arr2[] = "CBA";
	int ret = 1;
	ret = Judge(arr1, arr2);
	if (1 == ret)
	{
		printf("%s s2是s1旋转得到的\n", arr2);
	}
	else
	{
		printf("s2不是s1旋转得到的");
	}

	return 0;
}