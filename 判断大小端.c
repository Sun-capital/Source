
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
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;
}
