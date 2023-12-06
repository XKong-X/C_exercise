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
//
////字符逆序
//#include <string.h>
//int main()
//{
//	char ch[10001] = {0};
//	gets(ch);
//	//逆序
//	int l = 0;
//	int r = strlen(ch) - 1;
//	while (l < r)
//	{
//		int tmp = ch[l];
//		ch[l] = ch[r];
//		ch[r] = tmp;
//		l++; r--;
//	}
//	printf("%s", ch);
//	return 0;
//}
//
////打印菱形(新)
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        //上半部分
//        for (int i = 1; i < n + 1; i++)
//        {
//            //打印空格
//            for (int j = n - i; j > 0; j--)
//            {
//                printf("  ");
//            }
//            //打印‘*’
//            printf("* ");
//            for (int j = 1; j < i; j++)
//            {
//                printf("* * ");
//            }
//            printf("\n");
//        }
//        //下半部分
//        for (int i = 1; i < n; i++)
//        {
//            //打印空格
//            for (int j = 0; j < i; j++)
//            {
//                printf("  ");
//            }
//            //打印‘*’
//            printf("* ");
//            for (int j = n - i - 1; j > 0; j--)
//            {
//                printf("* * ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
////求出0～100000之间的所有“水仙花数”并输出
//#include <math.h>
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		//求位数
//		int count = 1;
//		while (tmp/=10)
//		{
//			count++;
//		}
//		tmp = i;
//		//求各位数字的count(位数)次方之和
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//是水仙花数则打印
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}