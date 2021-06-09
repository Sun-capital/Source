#define _CRT_SECURE_NO_WARNINGS 1
void two()
{


        int n;
        while (scanf("%d", &n) != EOF)
        {
            printf("%d\n", 1 << n);
        }
        return 0;

}