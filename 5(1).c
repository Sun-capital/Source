#include<stdio.h>
#include<assert.h>
int my_strlen(const char*p)
{
	assert(p!=NULL);
	if(*p=='\0')
	{
		return 0;
	}
	else
	return 1+my_strlen(p+1);
}
int main()
{
	int ret=my_strlen("abcdfe");
	printf("%d",ret);
	return 0;
 } 
