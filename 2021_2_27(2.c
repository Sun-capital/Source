#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(const char* arr)
{
	
	const char* p = arr;
	while (*p != '\0')
	{
		p++;
	}
	return p - arr;
}
int main()
{
	int a = 0;
	char* arr = "gongjinwen";
	a=my_strlen(arr);
	printf("%d", a);
	return 0;
}