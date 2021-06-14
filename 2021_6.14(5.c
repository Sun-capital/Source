#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int tmp = a;
    if (b > tmp)
    {
        tmp = b;
    }
    if (c > tmp)
    {
        tmp = c;
    }
    if (d > tmp)
    {
        tmp = d;
    }
    printf("%d", tmp);
    return 0;
}