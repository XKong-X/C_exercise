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
////�⺯��strcpy��ģ��ʵ��
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//����
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
////�⺯��strcmp��ģ��ʵ��
//int my_strcmp(const char* str1, const char* str2)//��const��ʾ��ֻ�Ƚ�* str1��* str2���������޸�
//{
//	assert(str1 && str2);//����
//	while (str1 && str2 && *str1 == *str2)//����ָ��ָ��\0������ָ����ַ������ʱ��ֹͣѭ��
//	{
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);//����*str1��*str2�Ĳ�
//}
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abq";
//	printf("%d\n", my_strcmp(str1, str2));
//	return 0;
//}
//
//�⺯��strcat��ģ��ʵ��
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);//����
	char* ret = dest;//����dest���ָ��ĵ�ַ
	while (*dest)//��dest�ġ�\0���ַ�
		dest++;
	while(*dest++ = *src++);//��src�е��ַ�׷�ӵ�dest��,������\0��
	return ret;
}
int main()
{
	char str1[20] = "Hello ";
	char str2[] = "World";
	printf("%s\n", my_strcat(str1, str2));
	return 0;
}