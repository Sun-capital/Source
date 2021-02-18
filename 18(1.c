#include<stdio.h>
#include<assert.h>
void* my_memove(void*dest,const void*src,size_t count)
{
	void* ret=dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	if(dest<src)
	{
		while(count--)
		{
			*(char*)dest=*(char*)src;
			++((char*)dest);
			++(char*)src;
		}
	}
	else
	{
		while(count--)
		{
			((char*)dest+count)=(*(char*)src+count);
		}
	}
	return ret;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int i=0;
	my_memove(void*dest,const void*src,20);
	for(i=0;i<9;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
 } 
