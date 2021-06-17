#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	while(a<=100)
	{
		printf("%3d", a);
		a += 2;
	}
	return 0;
}