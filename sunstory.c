#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("来自孙嘉傲的最高指令：启动关机程序，本机将在60秒后关机\n");
	printf("请输入密码取消进程\n");
	printf("请输入密码:\n");
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