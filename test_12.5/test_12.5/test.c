#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////���������ʮ��������ż˳��������ǰ��ż���ں�
//void move_odd_even(int arr[],int sz)
//{
//	int l = 0;
//	int r = sz - 1;
//	while (l < r)
//	{
//		//��ż�����ҵ���ͣ��
//		while (l < r && arr[l] % 2 == 1)
//		{
//			l++;
//		}
//		//��������ͬ��
//		while (l < r && arr[r] % 2 == 0)
//		{
//			r--;
//		}
//		//����
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
//	//����
//	move_odd_even(arr, sz);
//	//��ӡ
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}