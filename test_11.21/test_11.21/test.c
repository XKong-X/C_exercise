#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////KiKi说祝福语
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        printf("Happy new year!Good luck!\n");
//    }
//    return 0;
//}
//
////小乐乐求和
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("%lld", sum);
//    return 0;
//}
//
////KiKi求质数个数
//int main()
//{
//    //int flag = 1;
//    int count = 0;
//    for (int i = 101; i < 999; i += 2)
//    {
//        int flag = 1;
//        for (int j = 3; j < i; j+=2)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//
////使用指针打印数组
//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//
////字符逆序
//#include <string.h>
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	int l = 0;
//	int r = strlen(arr) - 1;
//	while (l < r)
//	{
//		char tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++; r--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//
////求一个数的前n项之和（a+aa+aa+aaa...）
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < 5; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
