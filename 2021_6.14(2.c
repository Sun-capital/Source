#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n, t, x, k;
    int m = 0;
    scanf("%d", &n);
    for (k = 1; n != 0; k = k * 10)
    {
        t = n % 10;
        if (t % 2 == 0)
        {
            x = 0;
        }
        else
        {
            x = 1;
        }
        m = x * k + m;
        n = n / 10;
    }
    printf("%d", m);
    return 0;
}