#include<stdio.h>
void Reverse(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	Reverse(arr,sz);
	int i=0;
	for(i=0;i<10;i++)
	{
	printf("%3d",arr[i]);
	}
	return 0;
 } 
