#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////�⺯����strcpy���Ĵ���ʵ�ּ��Ż�
//void my_strcpy(char*dest,char*src)
//{
//	while (*dest != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//}
//void my_strcpy(char* dest, const char* src)
//{
//	//����
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//#include <assert.h>
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
////����char*���͵���ֵ��Ϊ��ʵ����ʽ����
////strcpy�������ص���Ŀ��ռ����ʼ��ַ
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//����
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//
////�⺯����strlen�������Ż�
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++ != '\0')
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
