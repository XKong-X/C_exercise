#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//练习使用库函数，qsort排序各种类型的数据
//qsort使用（整型练习)
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
	qsort(arr, sz, sizeof(arr[0]), CmpInt);
	PrintInt(arr, sz);
}
//qsort使用（结构体练习）
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
	//qsort(arr, sz, sizeof(arr[0]), CmpStruct_age);
	qsort(arr, sz, sizeof(arr[0]), CmpStruct_name);
}
int main()
{
	TestInt();
	TestStruct();
	return 0;
}