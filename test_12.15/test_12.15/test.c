#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////�⺯��strcpy��ģ��ʵ��
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//��const����*src����ֹԭֵ���ı�
//{
//	char* ret = dest;//����Ŀ��ֵ�ĵ�ַ
//	//���ԣ�������ַΪNULLʱֹͣ���в�������������λ�ã�
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)//ѭ����*src��ԭֵ���е��ַ�����*dest��Ŀ��ֵ����ֱ������'\0'����ѭ��
//		;//�����
//	*dest = *src;//���'\0'�Ĵ�ֵ
//	return ret;//����Ŀ��ֵ�ĵ�ַ
//}
//int main()
//{
//	char arr1[] = "Hello World";
//	char arr2[100];
//	printf("%s\n", my_strcpy(arr2, arr1));//��ӡ��֤
//	return 0;
//}
//
//�⺯��strlen��ģ��ʵ��
#include <assert.h>
size_t my_strlen(const char* str)//��const����* str����ֹԭֵ���ı�
{
	//���ԣ�������ַΪNULLʱֹͣ���в�������������λ�ã�
	assert(str != NULL);
	size_t count = 0;//�ַ������Ȳ�����Ϊ���������Զ���Ϊ�޷�������
	while (*str++ != '\0')//ѭ���Ա�* str�е��ַ���ÿѭ��һ��count++��ֱ������'\0'����ѭ��
	{
		count++;
	}
	return count;//�����ַ�����
}
int main()
{
	char arr[] = "Hello World";
	printf("%zd\n", my_strlen(arr));
	return 0;
}