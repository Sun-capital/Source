#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    int a[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
    for (int i = 0; i < 12; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}