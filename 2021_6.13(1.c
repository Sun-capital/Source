#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char arr[8000];
    scanf("%s/n", arr);
    char* p = arr;
    long long c = 0, c1 = 0, c2 = 0;
    while (*p)
    {
        if (*p == 'C')
        {
            c++;
        }
        else if (*p == 'H')
        {
            c1 += c;
        }
        else if (*p == 'N')
        {
            c2 += c1;
        }
        p++;

    }
    printf("%lld\n", c2);
    return 0;
}