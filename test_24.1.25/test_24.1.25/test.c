#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//ģ��ʵ�ֿ⺯��strncpy
char* my_strncpy(char* dest, const char* src, size_t num)//��const����*src����ֹԭֵ���ı�
{
	assert(dest && src);//���ԣ�������ַΪNULLʱֹͣ���в�������������λ�ã�
	char* ret = dest;//����Ŀ��ֵ�ĵ�ַ
	size_t count = 0;//��¼�����ַ��ĸ���
	while (++count <= num && (*dest++ = *src++));//ѭ����*src��ԭֵ���е��ַ�����*dest��Ŀ��ֵ����ֱ������'\0'��count����numʱ����ѭ��
	return ret;//����Ŀ��ֵ�ĵ�ַ
}
int main()
{
	char str1[20] = { 0 };
	char str2[] = "Hello World";
	my_strncpy(str1, str2, 7);//strncpy�����������ַ�������������'\0'
	//strncpy(str1, str2, 7);
	printf(str1);
	return 0;
}