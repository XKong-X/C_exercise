#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////序列中删除指定数字(只打印，不存储)
//int main()
//{
//    int n, del;
//    scanf("%d", &n);
//    int arr[50];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &del);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
//
////使用指针打印数组内容
//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}