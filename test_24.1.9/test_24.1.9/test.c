#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

////库函数strlen的模拟实现
//size_t my_strlen(const char* p)
//{
//	assert(p);//断言
//	size_t count = 0;
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[20] = "abc";
//	size_t sz = my_strlen(arr);
//	printf("%zd\n", sz);
//	return 0;
//}
//
////库函数strcpy的模拟实现
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//断言
//	char* ret = dest;
//	while (*dest++ = *src++);
//	*dest = *src;
//	return ret;
//}
//int main()
//{
//	char str1[20];
//	char str2[] = "hello world";
//	printf("%s\n", my_strcpy(str1, str2));
//	return 0;
//}
//
////库函数strcmp的模拟实现
//int my_strcmp(const char* str1, const char* str2)//加const表示，只比较* str1和* str2，不进行修改
//{
//	assert(str1 && str2);//断言
//	while (str1 && str2 && *str1 == *str2)//当有指针指向‘\0’或者指向的字符不相等时，停止循环
//	{
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);//返回*str1与*str2的差
//}
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abq";
//	printf("%d\n", my_strcmp(str1, str2));
//	return 0;
//}
//
//库函数strcat的模拟实现
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);//断言
	char* ret = dest;//保存dest最初指向的地址
	while (*dest)//找dest的‘\0’字符
		dest++;
	while(*dest++ = *src++);//将src中的字符追加到dest中,包括‘\0’
	return ret;
}
int main()
{
	char str1[20] = "Hello ";
	char str2[] = "World";
	printf("%s\n", my_strcat(str1, str2));
	return 0;
}