#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//�⺯��memcpy��ģ��ʵ��
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);//����
	void* ret = dest;
	while (num--)//����ѭ������
	{
		*(char*)dest = *(char*)src;
		(char*)dest += 1;
		(char*)src += 1;
	}
	return ret;
}
int main()
{
	int arr1[20] = { 0 };
	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memcpy(arr1, arr2, 5);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}