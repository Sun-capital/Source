#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void my_strcpy(char* arr1, const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++)
	{
		;
	}
}
int main()
{
	char* arr1 = "zhangtianleisb";
	char* arr2 = "sbsbsbsb";
	int a = 10;
	//my_strcpy(arr1, arr2);
	int ret;
	ret = strlen(arr1);
	printf("%d\n", arr2);
	printf("%d", a);
	return 0;
}