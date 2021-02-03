#include<stdio.h>
#include<assert.h>
int my_strlen(const char*str)
{
	int count=0;
	while(*str)
	{
		count++;
		str++;
	}
}
int main()
{
	
int	len=my_strlen("abcdef");
	printf("%d",len);
	return 0;
}
