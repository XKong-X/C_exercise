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
//
////�������кϲ����㷨�����Ż���
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[1000], arr2[1000];
//    int i, j;
//    //��arr1
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //��arr2
//    for (j = 0; j < m; j++)
//    {
//        scanf("%d", &arr2[j]);
//    }
//    //��ӡС�����������±��1
//    i = j = 0;//��i��j��ֵ���¸�Ϊ0
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else//arr1[i]>=arr2[j]
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    //��ӡ�ϳ������ʣ�ಿ��
//    if (i < n)
//    {
//        while (i < n)
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//    }
//    else//j<m
//    {
//        while (j < m)
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    return 0;
//}