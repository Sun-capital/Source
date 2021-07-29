#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int grade = 0;
    char ch;
    scanf("%d", &grade);
    if (grade >= 90 && grade <= 100)
    {
        ch = 'A';
    }
    else if (grade >= 80 && grade <= 89)
    {
        ch = 'B';
    }
    else if (grade >= 70 && grade <= 79)
    {
        ch = 'C';
    }
    else if (grade >= 60 && grade <= 69)
    {
        ch = 'D';
    }
    else if (grade >= 0 && grade <= 59)
    {
        ch = 'E';
    }
    else {
        ch = 'F';
    }
    printf("%c", ch);
    return 0;
}