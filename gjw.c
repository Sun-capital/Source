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
	Stu s1={"������",19,"110","��ΰ�����Ů"};
	printf("���֣�%s\n ���䣺%d\n ��ݣ�%s",s1.name,s1.age,s1.sex);
	return 0; 
}
