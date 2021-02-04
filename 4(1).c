#include<stdio.h>
#include<assert.h>
int my_strlen(const char*str)
{
	int count=0;
	assert(str!=NULL);
	while(*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	int len=my_strlen("abcdefg");
	printf("%d",len);
	return 0;
}
