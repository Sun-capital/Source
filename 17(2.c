#include<stdio.h>
#include<assert.h>
struct S
{
	char name[20];
	int age;
};
void my_memcpy(void*s,const void*a,size_t num)
{
	void *ret=s;


	assert(s!=NULL);
    assert(a!=NULL);
    	while(num--)	
{
  *(char*)s=*(char*)a;
    ++(char*)s;
    ++(char*)a;
}
return ret;
}
int main()
{
	struct S arr1[]={{"±ò±ò",20},{"ºÚÇü",20}};
	struct S arr2[]={0};
	int i=0;
	my_memcpy(arr2,arr1,sizeof(arr1));
		for(i=0;i<2;i++)
	{
		printf("%d,%s\n",arr2[i].age,arr2[i].name);
	}

	return 0;
}
