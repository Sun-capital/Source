#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(char* arr1,  char* arr2)
{
	assert(arr1!= NULL);
	assert(arr2 != NULL);
	char* s1 = NULL;
	char* s2 = NULL;
	char* str = arr1;
	if (*arr2 == '\0')
	{
		return (char*)arr1;
	}
	while (*str)
	{
		s1 = str;
		s2 = arr2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return str;
		}
		str++;
	}
}
int main()
{
	char arr1[] = "aabbgga";
	char* arr2 = "bgg";
	char*ret;
	ret=my_strstr(arr1, arr2);
	printf("%s", ret);
	return 0;
}