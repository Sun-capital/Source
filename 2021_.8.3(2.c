#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* Exchange(char* pa, int sz)
{
    int left = 0;
    int right = sz;

    char* p = pa;
    char tmp;
    while (left < right)
    {
        tmp = *(pa + left);
        *(pa + left) = *(pa + right);
        *(pa + right) = tmp;
        left++;
        right--;
    }
    return pa;
}
int main()
{
    char a[1000] = { 0 };

    gets(a);
    int sz = strlen(a) - 1;
    char* pa = Exchange(a, sz);
    printf("%s", pa);
    return 0;
}