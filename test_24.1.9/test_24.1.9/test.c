#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//�⺯��strlen��ģ��ʵ��
size_t my_strlen(const char* p)
{
	assert(p);//����
	size_t count = 0;
	while (*p++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[20] = "abc";
	size_t sz = my_strlen(arr);
	printf("%zd\n", sz);
	return 0;
}