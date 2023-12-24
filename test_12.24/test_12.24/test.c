#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//qsort模拟实现
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
	for (int i = 0; i < num - 1; i++)//趟数
	{
		for (int j = 0; j < num - 1 - i; j++)//一趟比较的次数
		{
			//默认升序，所以cmp>0（前面的元素大于后面的元素）时，交换
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
		}
	}
}
//bubble_sort测试（整型测试）
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
//bubble_sort测试（结构体测试）
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
