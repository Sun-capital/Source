#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Rotate(char* s1, char* s2, int k)
{
	int k1 = k;
	int right=strlen(s1)-1;
	int i = 0;
	int left = 0;//abcd
	while (k1 <= right)
	{
		s2[i] = s1[k1];
		i++;
		k1++;
	}
	
	while (left < k)
	{
		s2[i] = s1[left];
		i++;
		left++;
	}
}
int main()
{
	char s1[] = "ABCD";
	char s2[10] = {0};
	int k = 0;
	scanf("%d", &k);
	Rotate(s1, s2, k);
	printf("%s\n", s2);
}