//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void Reserve(char* arr)
//{
//	int len = my_strlen(arr);
//	char tmp;
//	tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if( my_strlen(arr+1) >=2 )
//		Reserve(arr+1);
//		*(arr+len-1)=tmp;
//
//}
//int mian()
//{
//	char arr[] = "abcdef";
//	Reserve(arr);
//	printf("%s", arr);
//	return 0;
//}