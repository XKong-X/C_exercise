#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////指针-指针的绝对值,得到的是指针之间元素的个数
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	return 0;
//}
//
////错误的指针减法计算(指向不同空间时不要相减)
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &ch[0] - &arr[5]);
//	return 0;
//}
//
////1.
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//
////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	return 0;
//}
//
////指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	//存放指针的数组（指针数组）
//	int* parr[10] = { &a,&b,&c };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *parr[i]);
//	}
//
//	return 0;
//}
//
////用指针数组来模拟二维数组
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//