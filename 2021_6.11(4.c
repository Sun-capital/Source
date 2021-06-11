#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    unsigned int a, b;
    int add;
    scanf("%d %d", &a, &b);
    add = a + b;
    if (add >= 100)
    {
        add %= 100;
    }
    printf("%d", add);
    return 0;
}