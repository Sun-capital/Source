#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("������ΰ������ָ������ػ����򣬱�������60���ػ�\n");
	printf("����������ȡ������\n");
	printf("����������:\n");
	scanf("%s", arr);
	if (strcmp(arr,"501") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}