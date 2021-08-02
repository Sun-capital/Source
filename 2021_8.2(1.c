#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int My_strlen1(char* parr)
{
	int count = 0;
	while (*parr != '\0')
	{
		count++;
		parr++;
	}
	return count;
}
int My_strlen2(char* parr)
{
	if (*parr != '\0')
		return My_strlen2(parr + 1) + 1;
}
int My_strlen3(char* parr)
{
	char* start = parr;
	while (*parr != '\0')
	{
		parr++;
	}
	return parr - start;
}
int main()
{
	char arr[] = "zhonghuarenm";
	int sum1, sum2, sum3;
	sum1 = My_strlen1(arr);
	sum2 = My_strlen2(arr);
	sum3 = My_strlen3(arr);
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	printf("%d", sum3);
	return 0;
}