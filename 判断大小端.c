
#include<stdio.h>
int check()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
