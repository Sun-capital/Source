#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    char num1[100], num2[100];
    scanf("%s %s", num1, num2);
    if (strcmp(num1, num2) == 0)
    {
        printf("same");
    }
    else
    {
        printf("different");
    }
    return 0;
}