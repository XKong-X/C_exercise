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