#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int strlen1(char* arr)
{
	int i = 0;
	while (*arr != '\0')
	{
		i++;
		arr++;
	}
	return i;
}
int strlen2(char* arr)
{
	if (*arr != '\0')
		return 1 + strlen(arr + 1);
	else
		return 0;
}
int main()
{
	
	char arr[] = "gongjingwen";
	int ret1 = strlen1(arr);
	int ret2 = strlen2(arr);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return 0;
}