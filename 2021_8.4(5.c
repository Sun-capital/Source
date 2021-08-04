#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* My_strcpy(char* parr1, const char* parr2)
{
	assert(parr1 && parr2);
	char* p = parr1;
	while (*parr1++ = *parr2++)
	{
		;
	}
	return p;
}
int main()
{
	char arr1[] = "asdafasfsa";
	char arr2[20] = "xxxxxxxxxx";
	char * ret=My_strcpy(arr2, arr1);
	printf("%s", ret);

	return 0;
}