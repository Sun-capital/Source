#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret *= n;
		sum += ret;
	}
	//���sum�Ĵ�С
	printf("%d", sum);
	return 0;//����һ������
}