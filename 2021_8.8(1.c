#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int ret = m > n ? n : m;
	while (1)
	{
		if (m % ret == 0 && n % ret == 0)
		{
			break;
		}
		ret--;
	}
	printf("%d",ret);
	return 0;
}