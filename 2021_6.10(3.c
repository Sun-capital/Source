#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = sizeof(short);
    int b = sizeof(int);
    int c = sizeof(long);
    int d = sizeof(long long);
    printf("The size of short is %d bytes.\n", a);
    printf("The size of int is %d bytes.\n", b);
    printf("The size of long is %d bytes.\n", c);
    printf("The size of long long is %d bytes.\n", d);
    return 0;
}