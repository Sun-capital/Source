//#define _CRT_SCURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str)
{
	char*start=str;
	char*end=str;
	while(*end!="\0")
	{
		end++;
	}
	return end - start;

}
int main()
{
	char arr[] = "bit";
	int len = my_srtlen(arr);
	printf("%d\n", len);
	return 0;
}
