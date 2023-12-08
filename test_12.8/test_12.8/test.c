#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////简单模拟实现库函数strlen
////常规方法实现
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*(s++) != '\0')
//	{
//		count++;
//	}
//	return count;
//}
////递归实现
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++s);
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}