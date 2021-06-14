#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a, m = 0;
    for (int i = 0; i < 4; i = i + 1)
    {
        scanf("%d", &a);
        if (a >= m)
        {
            m = a;
        }
    }
    printf("%d", m);
    return 0;
}