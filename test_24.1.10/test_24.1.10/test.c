#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

////库函数memcpy的模拟实现
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);//断言
//	void* ret = dest;
//	while (num--)//控制循环次数
//	{
//		*(char*)dest = *(char*)src;
//		(char*)dest += 1;
//		(char*)src += 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr1, arr2, 5);
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//
//库函数memmove的模拟实现
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest > src)
	{
		while (num--)//控制循环次数
		{
			*((char*)dest + num) = *((char*)src + num);//当dest > src时，从后往前复制避免覆盖dest的数据
		}
	}
	else if (dest < src)
	{
		while (num--)//控制循环次数
		{
			*(char*)dest = *(char*)src;//当dest < src时，从前往后复制避免覆盖dest的数据
			(char*)dest += 1;
			(char*)src += 1;
		}
	}
	else
		return ret;//当dest = src时，不复制直接返回
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 , arr1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}