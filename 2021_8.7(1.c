#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct stu
{
	char name[100];
	int age;
}Student;
int main()
{
	Student s1 = { "zhaohongbin",30 };
	
	printf("%s %d", s1.name, s1.age);
	return 0;
}