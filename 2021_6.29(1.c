#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char psw[10] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("please input:");
		scanf("%s", psw);
		if (strcmp(psw, "password") == 0);
		break;
	}
	if (3 == i)
		printf("exit\n");
	else
		printf("log in\n");
	return 0;
}