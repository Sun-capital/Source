#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a, b, c, d, t;
    scanf("%d %d %d %d\n", &a, &b, &c, &d);
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (a < d)
    {
        t = a;
        a = d;
        d = t;
    }
    printf("%d\n", a);
}