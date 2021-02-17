#include<stdio.h>
typedef struct S
{
	char name[20];
	int age;
}Y;
int main()
{
	Y arr1[]={{"±ò±ò",20},{"ºÚÇü",20}};
	Y arr2[]={0};
	int i=0;
	memcpy(arr2,arr1,sizeof(arr1));
	for(i=0;i<2;i++)
	{
		printf("%d,%s\n",arr2[i].age,arr2[i].name);
	}

	return 0;
}
