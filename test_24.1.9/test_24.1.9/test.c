#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

////�⺯��strlen��ģ��ʵ��
//size_t my_strlen(const char* p)
//{
//	assert(p);//����
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
//�⺯��strcpy��ģ��ʵ��
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);//����
	char* ret = dest;
	while (*dest++ = *src++);
	*dest = *src;
	return ret;
}
int main()
{
	char str1[20];
	char str2[] = "hello world";
	printf("%s", my_strcpy(str1, str2));
	return 0;
}