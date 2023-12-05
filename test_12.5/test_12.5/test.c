#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////调整输入的十个数的奇偶顺序（奇数在前，偶数在后）
//void move_odd_even(int arr[],int sz)
//{
//	int l = 0;
//	int r = sz - 1;
//	while (l < r)
//	{
//		//找偶数，找到就停下
//		while (l < r && arr[l] % 2 == 1)
//		{
//			l++;
//		}
//		//找奇数，同上
//		while (l < r && arr[r] % 2 == 0)
//		{
//			r--;
//		}
//		//交换
//		if (l < r)
//		{
//			int tmp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = tmp;
//			l++; r--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//调整
//	move_odd_even(arr, sz);
//	//打印
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}