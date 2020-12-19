#include<stdio.h> 

int main()
{
	char a;
	float temperature;
	printf("请输入温度类型（F/C）及温度；");
	scanf("%c%f",&a,&temperature);
	if(a=='F')
{
	temperature=(temperature-32)*5/9;
	printf("The Centigrade is %.2f\n",temperature) ;
}
if(a=='C')
{
	temperature=(temperature*9/5)+32;
	printf("The Fahrenheit is %.2f\n",temperature);
}
	return 0;
}
