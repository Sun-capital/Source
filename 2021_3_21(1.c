#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
union S
{
	char a;
	int b;
};
int main()
{
	union S s;
	s.b = 1;
	if ((s.a) == 1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}

	return 0;
}