#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void exchange(int* px, int* py)
{
	int c = 0;
	c = *px;
	*px = *py;
	*py = c;

}
int main()
{
	int x;
	int y;
	scanf("%d %d", &x, &y);
	printf("����ǰ��%d %d", x, y);
	exchange(&x, &y);
	printf("������%d %d", x, y);
	return 0;
}