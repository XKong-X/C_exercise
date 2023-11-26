#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////班级成绩输入输出
//int main()
//{
//    double arr[5][5] = { 0.0 };
//    for (int i = 0; i < 5; i++)
//    {
//        double sum = 0.0;
//        for (int j = 0; j < 5; j++)
//        {
//            scanf("%lf", &arr[i][j]);
//            printf("%.1lf ", arr[i][j]);
//            sum += arr[i][j];
//        }
//        printf("%.1lf\n", sum);
//    }
//    return 0;
//}
//
////矩阵元素定位
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr[5][5];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int x, y;
//    scanf("%d%d", &x, &y);
//    printf("%d", arr[x][y]);
//    return 0;
//}
//
////最高身高
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//    int tmp1 = 0;
//    int tmp2 = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//        for (int j = 0; j < m; j++)
//        {
//            if (arr[tmp1][tmp2] <= arr[i][j])
//            {
//                tmp1 = i;
//                tmp2 = j;
//            }
//        }
//    }
//    printf("%d %d", tmp1 + 1, tmp2 + 1);
//    return 0;
//}
//
////矩阵相等判定
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10], arr2[10][10];
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    if (count == n * m)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}
//
////矩阵计算
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[10][10];
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//                sum += arr[i][j];
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
//
////分数求和
//int main()
//{
//	int n = 0;
//	int flag = 1;
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i)*flag;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//
////1到100的所有整数中9得个数
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == 9)
//				count++;
//			tmp /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
////打印闰年
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
////求10个整数中的最大值
////输入用例：15 68 95 34 21 62 76 92 45 22
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		if (sum < n)
//		{
//			sum = n;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//[NOIP2018]标题统计
// //方法一
// int main() 
// {
//     char ch='0';
//     int count=0;
//     while((ch=getchar())!=EOF)
//     {
//         if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'||ch>='0'&&ch<='9')
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }
////方法二（用库函数解决）
//#include <ctype.h>
//int main()
//{
//    char ch = '0';
//    int count = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isalpha(ch) || isdigit(ch))
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}
