#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = 0;
	while (scanf("%c", &ch) != EOF)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		getchar();
	}
	return 0;
}