#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ����
#include<stdio.h>
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (y % 4 == 0 && y % 100 != 0)
			printf("%d\n", y);
		else if (y % 400 == 0)
			printf("%d\n", y);
	}
	return 0;
}