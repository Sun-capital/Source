#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void multiplication(int y)
{
	int j = 0;
	int i = 0;
	for (i = 1; i <= y; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%3d", i, j,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	multiplication(i);
	return 0;
}