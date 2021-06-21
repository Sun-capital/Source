#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
    for (i = 1; i <= 100; i++)
       {
	if (i % 3 == 0)
	{
		printf("%3d", i);
	}
}
int i = 0;
for (i = 1000; i <= 2000; i++)
{
	if ((i % 4 == 0) && (i % 100 != 0))
	{
		printf("%5d", i);
	}
}
	return 0;
}