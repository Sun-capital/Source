#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_copy(char* arr1, char* arr2)
{
	while (*arr1++ = *arr2++)
	{
		;
	}
}
int main()
{
	char arr1[] = "###############";
	char arr2[] = "gongjingwen»‚»‚";
	my_copy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}