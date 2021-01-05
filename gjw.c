#include<stdio.h>
typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[20];
}Stu;

int main()
{
	Stu s1={"巩静雯",19,"110","孙嘉傲的仙女"};
	printf("名字：%s\n 年龄：%d\n 身份：%s",s1.name,s1.age,s1.sex);
	return 0; 
}
