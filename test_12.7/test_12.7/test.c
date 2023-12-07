#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////求n的前m项之和(例：n=2，m=5,则Sn=2+22+222+2222+22222=24690)
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int k = 0;
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		k = n + k * 10;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给n元，可以喝多少汽水
//int main()
//{
//	int money;
//	while (~scanf("%d", &money))
//	{
//		int drink = 0;
//		int empty = 0;
//		drink = money / 1;
//		empty = drink / 1;
//		while (empty >= 2)
//		{
//			drink += empty / 2;
//			empty = empty / 2 + empty % 2;
//		}
//		if (money > 0)
//			printf("%d\n", drink);
//		else
//			printf("%d\n", 0);
//	}
//	return 0;
//}
//
////调整数组中数字的顺序使得数组中所有的奇数位于数组的前半部分,所有偶数位于数组的后半部分
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,9,8,7,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int l = 0;
//	int r = sz - 1;
//	while (l < r)
//	{
//		//从左找偶数，找到则停下
//		while (l < r && arr[l] % 2 == 1)
//		{
//			l++;
//		}
//		//从右找奇数，找到则停下
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
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
////实现一个函数来交换两个整数的内容
//void exc_int(int arr1[], int arr2[])
//{
//	int tmp = arr1[0];
//	arr1[0] = arr2[0];
//	arr2[0]=tmp;
//}
//int main()
//{
//	int arr1[1], arr2[1];
//	scanf("%d %d", &arr1[0], &arr2[0]);
//	exc_int(arr1, arr2);
//	printf("%d %d", arr1[0], arr2[0]);
//	return 0;
//}
//
////打印一个数的每一位（递归实现）
//void print(int n)
//{
//	if (n / 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}