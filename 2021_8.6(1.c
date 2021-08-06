#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int y, m, day;
    int d[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    while (~scanf("%d %d", &y, &m))
    {
        day = d[m - 1];
        if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
        {
            if (m == 2)
                day++;

        }
        printf("%d\n", day);

    }
    return 0;
}