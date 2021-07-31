#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    while (n)
    {
        arr[i] = n % 6;
        n = n / 6;
        i++;
    }

    for (i--; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}