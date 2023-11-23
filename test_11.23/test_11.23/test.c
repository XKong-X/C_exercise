#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////打印一个n行的菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//上
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//打印“*”
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印“*”
//		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
////喝汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	//int empty = money/1;
//	//int total = money/1;
//	//while (empty>=2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//printf("%d", total);
//	if (money > 0)
//		printf("%d", 2 * money - 1);
//	else
//		printf("%d", 0);
//	return 0;
//}
//
////小乐乐与进制转换
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[12] = { 0 };
//    int count = 0;
//    while (n)
//    {
//        arr[i++] = n % 6;
//        n /= 6;
//        count++;
//    }
//    for (i = count; i > 0; i--)
//    {
//        printf("%d", arr[i - 1]);
//    }
//    return 0;
//}
//
////判断两个数的大小关系
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (~scanf("%d %d", &a, &b))
//    {
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//    return 0;
//}
//
////被5整除问题
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}
//
////线段图案
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
////回文对称数
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    //生成1-100000
//    for (i = 1; i <= n; i++)
//    {
//        int k = 0;
//        int tmp = i;
//        //将数反转
//        while (tmp)
//        {
//            k = k * 10 + tmp % 10;
//            tmp /= 10;
//        }
//        //比较交换前和交换后的值
//        if (k == i)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
//
//正方形图案
// //方法1（不推荐）
// int main()
// {
//     int n = 0;
//     while (~scanf("%d", &n))
//     {
//         int i = 0;
//         int count = 0;
//         for (i = 1; i <= n; i++)
//         {
//             for (i = 1; i <= n; i++)
//             {
//                 printf("* ");
//             }
//             count++;
//             printf("\n");
//             if (i == n+1)
//                 i = 1;
//             if (count == n)
//                 break;
//         }
//     }
//     return 0;
// }
////方法2（推荐）
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int count = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////直角三角形图案
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////翻转直角三角形图案
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = n - i + 1; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////带空格直角三角形图案
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            //打印空格
//            for (int j = 2 * (n - i); j > 0; j--)
//            {
//                printf(" ");
//            }
//            for (int j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}