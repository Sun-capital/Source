#define _CRT_SECURE_NO_WARNINGS 1
void shui()
{
	int a, b, c, d, e;
	int i;
	for (i = 10000; i < 100000; i++)
	{
		a = i % 10;
		b = (i / 10) % 10;
		c = (i / 100) % 10;
		d = (i / 1000) % 10;
		e = (i / 10000) % 10;
		if (i == e * (1000 * d + 100 * c + 10 * b + a) +
			(10 * e + d) * (100 * c + 10 * b + a) +
			(100 * e + 10 * d + c) * (10 * b + a) +
			(1000 * e + 100 * d + 10 * c + b) * a)
		{
			printf("%d", i);
		}
	}
}