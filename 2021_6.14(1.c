#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num;
    int sum = 0;
    int n = 1;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        n *= i;
        sum += n;
    }
    printf("%d", sum);
    return 0;
}