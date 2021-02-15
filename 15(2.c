#include<stdio.h>
#include<assert.h>
my_strcpy(char*dest,const char*src)
{
	assert(dest!=NULL);
	assert(dest!=NULL);
	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest=*src;
}
int main()
{
	char arr1[]="abcdrfgadasasdsa";
	char arr2[]="gongjingwen";
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
}
