#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//define �����ʶ������
#define MAX 1000
//define �����
#define ADD(x,y) ((x)+(y))
int main()
{
	int sum = ADD(124, 124);
	printf("%d\n", sum);
	int fial = MAX * sum;
	printf("%d\n", fial);
}