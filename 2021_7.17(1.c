#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	unsigned int num = 0;
	int count = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	while (num != 0)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}
	printf("%d", count);
}