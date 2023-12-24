#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//qsortģ��ʵ��
void Swap(char* buf1, char* buf2, int size)
{
	int tmp = 0;
	for (int i = 0; i < size; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++; buf2++;
	}
}
void bubble_sort(void* base, int num, int size, int (*cmp)(const void*, const void*))
{
	for (int i = 0; i < num - 1; i++)//����
	{
		for (int j = 0; j < num - 1 - i; j++)//һ�˱ȽϵĴ���
		{
			//Ĭ����������cmp>0��ǰ���Ԫ�ش��ں����Ԫ�أ�ʱ������
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
		}
	}
}
//bubble_sort���ԣ����Ͳ��ԣ�
void PrintInt(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int CmpInt(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void TestInt()
{
	int arr[] = { 1,6,5,4,3,2,9,7,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), CmpInt);
	PrintInt(arr, sz);
}
//bubble_sort���ԣ��ṹ����ԣ�
struct Stu
{
	char name[20];
	int age;
};
int CmpStruct_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}
int CmpStruct_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}
void TestStruct()
{
	struct Stu arr[] = { {"zhangsan", 15}, {"lisi", 40}, {"wangwu", 20} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz, sizeof(arr[0]), CmpStruct_age);
	bubble_sort(arr, sz, sizeof(arr[0]), CmpStruct_name);
}
int main()
{
	//TestInt();
	TestStruct();
	return 0;
}
