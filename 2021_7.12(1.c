#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int exchange(char* str1, char* str2)
{
	assert((str1!=NULL)&&(str2!=NULL));
	while (*str1 != '\0')
	{
		if (*str1 != ' ')
		{
			*str2 = *str1;
			str2++;
		}
		else
		{
			strcpy(str2, "%20");
			str2 += 3;
		}
		str1++;
	}
	*str2 = '\0';
	return 0;
}
int main()
{
	char str1[] = "abc defgx yz";
	char str2[40];
	exchange(str1, str2);
	printf("%s\n", str2);
	return 0;

}