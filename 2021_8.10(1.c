#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int ret = m > n ? m : n;
	
	while (1)
	{
		if ((ret % m == 0) && (ret % n == 0))
			break;
	
			ret++;
	}
	printf("%d", ret);
	return 0;
}