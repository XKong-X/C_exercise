#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////有序序列插入一个整数
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[50];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &arr[n]);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n + 1; j++)
//        {
//            if (arr[i] > arr[j])
//            {
//                int tmp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}